"""This node is used to test the functionality of the frankastein package."""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Quaternion, Pose
from .submodules.frankastein import Wrapper, Gripper, FRANKA
from enum import Enum, auto
import numpy as np
import csv


class State(Enum):
    """

    Current state of the system.

    Determines what the main timer function should be doing on each iteration.

    """

    NEUTRAL = auto()
    DONE = auto()
    INITIALIZE = auto()
    WAYPOINT1 = auto()
    WAYPOINT2 = auto()
    GRIPPERCLOSE = auto()
    GRIPPEROPEN = auto()
    PLANNING = auto()
    PLANNING1 = auto()
    EXECUTING = auto()
    EXECUTING1 = auto()
    PICKUP = auto()
    GRIPPERWAYPT = auto()
    PLANNING_GRIPPER = auto()

class ILikeToMoveItMoveIt(Node):
    """
    Test Node. Commented code includes functions that work with interbotix.

    Tried with different positions and orientations.

    """

    def __init__(self):
        super().__init__("iliketomoveitmoveit")
        self.KingJulien = Wrapper(self, robot_type='panda_manipulator')
        self.Mort = FRANKA
        self.grasping = Gripper(self)

        self.orientation = Quaternion(x=0.96791, y=-0.24773, z=0.017813, w=0.038285)

        self.state = State.PICKUP
        self.KingJulien.add_box([0.0, 0.0, -0.6], 1.0)

        self.timer = self.create_timer(1/100, callback=self.timer_callback)
        # from IPython import embed; embed()
        coordinate_x, coordinate_y = np.loadtxt('circle_points_many.csv', unpack= True, delimiter=',')
        # coordinate_x, coordinate_y = np.loadtxt('/home/demiana/Documents/me495_ros/workspaces/final_project/src/final-project-Group5/mattagascar/mattagascar/circle_points_small.csv', unpack= True, delimiter=',')
        # coordinate_x, coordinate_y = np.loadtxt('/home/demiana/Documents/me495_ros/workspaces/final_project/src/final-project-Group5/mattagascar/mattagascar/picture_points.csv', unpack= True, delimiter=',')
        
        coordinate_list = []

        for x, y in zip(coordinate_x, coordinate_y):
            point = (x,y)
            coordinate_list.append(point)

        self.waypoints = coordinate_list

        self.z_standoff = 0.25
        self.z_dot = 0.19
        self.paint_location_standoff = Pose()
        self.paint_location_standoff.position.x = 0.40275
        self.paint_location_standoff.position.y = 0.43162
        self.paint_location_standoff.position.z = self.z_standoff
        self.paint_location_standoff.orientation = self.orientation
        
        self.paint_location_dip = Pose()
        self.paint_location_dip.position.x = 0.40275
        self.paint_location_dip.position.y = 0.43162
        # NOTE: we were subtracting 0.05 from the z value and keeping max_step = 0.1 and it was working but once we just decreased max_step, it also worked??
        self.paint_location_dip.position.z = self.z_dot
        self.paint_location_dip.orientation = self.orientation

        # pickup location
        # self.pickuploc = [0.44337, 0.244664, 0.065]
        # standoff pose
        self.pickup_loc = Pose()
        # self.pickup_orientation = Quaternion(x=0.99958, y=-0.01098, z=0.02167, w=0.01567)
        self.pickup_loc.position.x = 0.44337
        self.pickup_loc.position.y = 0.244664
        self.pickup_loc.position.z = self.z_standoff
        self.pickup_loc.orientation = self.orientation

        self.pickup_dip = Pose()
        self.pickup_dip.position.x = self.pickup_loc.position.x
        self.pickup_dip.position.y = self.pickup_loc.position.y
        self.pickup_dip.position.z = 0.18
        self.pickup_dip.orientation = self.orientation

        self.pick_msg_wpts = []
        self.pick_msg_wpts.append(self.pickup_loc)
        self.pick_msg_wpts.append(self.pickup_dip)
        # self.pick_msg_wpts.append(self.pickup_loc)

        #
        self.visited = []
        self.count = 0
        
        # self.pick_msg_wpts.append(self.pickuploc, self.dipping)
    def timer_callback(self):
        self.get_logger().info(f"\n\tNOTE: State of King Julien: {self.KingJulien.state}")
        # every state wrapper has, need an if statement for each state\
        if self.state == State.PICKUP:
            self.KingJulien.plan_path_cartesian(self.pick_msg_wpts)

            # if not self.pick_msg_wpts:
            #     self.state = State.DONE
            self.state = State.PLANNING_GRIPPER
            
        elif self.state == State.PLANNING_GRIPPER:
            # this needs to be changed; need to figure out how to get it to pick up and then close gripper and then return to standoff
            # might need to add more state machine things to make it work
            if self.KingJulien.state == self.Mort.EXECUTING:
                # self.state = State.GRIPPERWAYPT
                self.state = State.GRIPPERCLOSE

        # elif self.state == State.GRIPPERWAYPT:
        #     if self.KingJulien.state == self.Mort.DONE:
        #         self.state = State.GRIPPERCLOSE

        elif self.state == State.GRIPPERCLOSE:
            self.grasp_close_goal = self.grasping.create_close_grasp_msg()
            if self.grasping.state == self.Mort.CLOSE:
                self.pick_msg_wpts.append(self.pickup_loc)
                self.state = State.INITIALIZE

        # maybe get it into ready state and then begin painting

        elif self.state == State.INITIALIZE:  

            self.get_logger().info('IN INITIALIZE', once=True)

            msg_waypoints = []

            standoff = Pose()
            standoff.position.x = self.waypoints[0][0]
            standoff.position.y = self.waypoints[0][1]
            standoff.position.z = self.z_standoff
            standoff.orientation = self.orientation

            dot_pos = Pose()
            dot_pos.position.x = standoff.position.x
            dot_pos.position.y = standoff.position.y
            dot_pos.position.z = self.z_dot
            dot_pos.orientation = self.orientation

            msg_waypoints.append(standoff)
            msg_waypoints.append(dot_pos)
            msg_waypoints.append(standoff)
            self.state = State.EXECUTING

            self.visited.append(self.waypoints[0])
            self.waypoints.pop(0)
            if not self.waypoints:
                self.state = State.DONE

            if self.count % 5 == 0:
                # NOTE: needs paint
                # NOTE: simulating for now until using cv (cv will tells us when to refill)
                msg_waypoints.append(self.paint_location_standoff)
                msg_waypoints.append(self.paint_location_dip)
                msg_waypoints.append(self.paint_location_standoff)

            # from IPython import embed; embed()
            self.KingJulien.plan_path_cartesian(msg_waypoints)
            self.get_logger().info('Sent Waypoint msg, set state to EXECUTING', once=True)
            self.state = State.PLANNING

        elif self.state == State.PLANNING:
            if self.KingJulien.state == self.Mort.EXECUTING:
                self.state = State.EXECUTING

        elif self.state == State.EXECUTING:
            self.get_logger().info('Waiting for Execution to be done', once=True)
            if self.KingJulien.state == self.Mort.DONE:
                self.count += 1
                self.state = State.INITIALIZE

        elif self.state == State.DONE:
            self.get_logger().info('DONE full painting', once=True)


def main(args=None):
    """Run main function."""
    rclpy.init(args=args)
    node = ILikeToMoveItMoveIt()
    rclpy.spin(node)
    rclpy.shutdown()
