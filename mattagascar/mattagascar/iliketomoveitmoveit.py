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
    PICKBRUSH = auto()
    UP = auto()
    EXEC = auto()
    UPPLAN = auto()

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

        #varibles for z
        self.z_brush_standoff = 0.25
        self.z_paint_standoff = 0.4
        self.z_brush_dot = 0.19
        self.z_paint_dip = 0.25
        self.z_brush_dip = 0.18
        self.z_dot_standoff = 0.25
        
        # paint standoff location
        self.paint_location_standoff = Pose()
        self.paint_location_standoff.position.x = 0.40275
        self.paint_location_standoff.position.y = 0.43162
        self.paint_location_standoff.position.z = self.z_paint_standoff
        self.paint_location_standoff.orientation = self.orientation
        
        # paint dip location
        self.paint_location_dip = Pose()
        self.paint_location_dip.position.x = 0.40275
        self.paint_location_dip.position.y = 0.43162
        # NOTE: we were subtracting 0.05 from the z value and keeping max_step = 0.1 and it was working but once we just decreased max_step, it also worked??
        self.paint_location_dip.position.z = self.z_paint_dip
        self.paint_location_dip.orientation = self.orientation

        # paintbrush location
        # brush standoff pose
        self.pickup_loc = Pose()
        self.pickup_loc.position.x = 0.43337
        self.pickup_loc.position.y = 0.244664
        self.pickup_loc.position.z = self.z_brush_standoff
        self.pickup_loc.orientation = self.orientation


        #brush pickup location
        self.pickup_dip = Pose()
        self.pickup_dip.position.x = self.pickup_loc.position.x
        self.pickup_dip.position.y = self.pickup_loc.position.y
        self.pickup_dip.position.z = self.z_brush_dip
        self.pickup_dip.orientation = self.orientation

        self.pick_msg_wpts = []
        self.pick_msg_wpts.append(self.pickup_loc)
        self.pick_msg_wpts.append(self.pickup_dip)

        #
        self.visited = []
        self.count = 0

    def timer_callback(self):
        if self.state == State.PICKUP:
            # go to paint brush location and dip down
            self.KingJulien.plan_path_cartesian(self.pick_msg_wpts)
            self.state = State.PLANNING_GRIPPER

        elif self.state == State.PLANNING_GRIPPER:
            self.get_logger().info('IN PLANNING GRIPPER', once=True)
            if self.KingJulien.state == self.Mort.EXECUTING:
                self.get_logger().info('EXECUTING', once=True)
                self.state = State.EXECUTING1

        elif self.state == State.EXECUTING1:
            self.get_logger().info('Waiting for Execution to be done', once=True)
            if self.KingJulien.state == self.Mort.DONE:
                self.state = State.GRIPPERCLOSE

        elif self.state == State.GRIPPERCLOSE:
            self.get_logger().info('\n\tNOTE: ILikeToMoveItMoveItGRIPPERCLOSING', once=True)
            self.grasp_close_goal = self.grasping.create_close_grasp_msg()
            if self.grasping.state == self.Mort.CLOSE:
                # needs to go to standoff position of paintbursh to pick it up
                self.state = State.PICKBRUSH

        elif self.state == State.PICKBRUSH:
            # this is the position of the paint brush
            self.pickup = [self.pickup_loc.position.x, self.pickup_loc.position.y, self.pickup_loc.position.z]
            self.KingJulien.plan_path_to_position_orientation(self.pickup, self.orientation)
            self.state = State.UP

        elif self.state == State.UP:
            if self.KingJulien.state == self.Mort.EXECUTING:
                self.state = State.EXEC
        elif self.state == State.EXEC:
            if self.KingJulien.state == self.Mort.DONE:
                self.state = State.INITIALIZE

        elif self.state == State.INITIALIZE:

            self.get_logger().info('IN INITIALIZE', once=True)

            msg_waypoints = []

            standoff = Pose()
            standoff.position.x = self.waypoints[0][0]
            standoff.position.y = self.waypoints[0][1]
            standoff.position.z = self.z_dot_standoff
            standoff.orientation = self.orientation

            dot_pos = Pose()
            dot_pos.position.x = standoff.position.x
            dot_pos.position.y = standoff.position.y
            dot_pos.position.z = self.z_brush_dot
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
