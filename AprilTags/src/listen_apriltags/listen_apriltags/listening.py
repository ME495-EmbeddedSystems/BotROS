import rclpy
from rclpy.node import Node
from listen_apriltags_interface.srv import Location
from listen_apriltags_interface.msg import Loc
from tf2_ros.transform_listener import TransformListener
from tf2_ros.buffer import Buffer
from tf2_ros import TransformException
from enum import Enum, auto
import numpy as np

class State(Enum):

    CALIBRATING = auto(),
    TRANSFORMING = auto(),


class listener(Node):

    def __init__(self):
        super().__init__('listener')

        # # create service for apriltag positions
        # self.paintbrush_service = self.create_service(Location, 'pb_location', self.pb_callback)

        # create publihsers for apriltag positions
        self.pub_paint = self.create_publisher(Loc, 'paint_loc', 10)

        # initialized transform
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.timer = self.create_timer(0.05, self.timer_callback)

        self.camera_to_ee = None
        self.base_to_ee = None

        self.state = State.CALIBRATING

    def timer_callback(self):
        """Print the transform from platform to brick."""

        if self.state == State.CALIBRATING:
            
            camera_frame = "camera_color_optical_frame"
            tag_frame6 = "tag36h11:0"
            robo_ee_frame = "panda_link8"
            robo_base_frame = "panda_link0"

            # robot to camera transform
            try:
                t = self.tf_buffer.lookup_transform(tag_frame6, camera_frame, rclpy.time.Time())
                self.camera_to_ee = [t.transform.translation.x, t.transform.translation.y, t.transform.translation.z,]

            except TransformException as ex:
                self.get_logger().info(f"Could not transform {camera_frame} to {tag_frame6}: {ex}")

            # robot to base transform
            try:
                t = self.tf_buffer.lookup_transform(robo_ee_frame, robo_base_frame, rclpy.time.Time())
                self.base_to_ee = [t.transform.translation.x, t.transform.translation.y, t.transform.translation.z]

            except TransformException as ex:
                self.get_logger().info(f"Could not transform {robo_base_frame} to {robo_ee_frame}: {ex}")

            if (self.camera_to_ee is not None) and (self.base_to_ee is not None):
                self.camera_to_base = self.camera_to_robot_transform()
                self.get_logger().info('Got transform from camera to robot base')
                self.get_logger().info(f'Base: x={self.base_to_ee[0]}, y={self.base_to_ee[1]}, z={self.base_to_ee[2]}')
                self.get_logger().info(f'Camera: x={self.camera_to_ee[0]}, y={self.camera_to_ee[1]}, z={self.camera_to_ee[2]}')
                self.get_logger().info(f'Transform: x={self.camera_to_base[0]}, y={self.camera_to_base[1]}, z={self.camera_to_base[2]}')
                self.state = State.TRANSFORMING

        if self.state == State.TRANSFORMING:
            camera_frame = "camera_color_frame"
            tag_frame1 = "tag36h11:1"
            tag_frame5 = "tag36h11:2"

            # initialize message types
            paint = Loc()

            # paint brush rack transform
            try:
                t = self.tf_buffer.lookup_transform(tag_frame1, camera_frame, rclpy.time.Time())
                self.t1 = [t.transform.translation.x, t.transform.translation.y, t.transform.translation.z]

                # transform to robot frame
                self.robot_to_brush = [self.t1[0] - self.camera_to_base[0], self.t1[1] - self.camera_to_base[1], self.t1[2] - self.camera_to_base[2]]

                # individual paints:
                # hard code the axes of april tag, so circles along y axis and centered on x axis
                paint.red = [self.robot_to_brush[0], self.robot_to_brush[1] + 0.04, self.robot_to_brush[2]]
                paint.blue = [self.robot_to_brush[0], self.robot_to_brush[1] + 0.09, self.robot_to_brush[2]]
                paint.green = [self.robot_to_brush[0], self.robot_to_brush[1] + 0.14, self.robot_to_brush[2]]
                paint.yellow = [self.robot_to_brush[0], self.robot_to_brush[1] + 0.19, self.robot_to_brush[2]]

            except TransformException as ex:
                self.get_logger().info(f"Could not transform {camera_frame} to {tag_frame1}: {ex}")
                paint.red = []
                paint.blue = []
                paint.green = []
                paint.yellow = []

            # paint palete transform
            try:
                t = self.tf_buffer.lookup_transform(tag_frame5, camera_frame, rclpy.time.Time())
                self.t5 = [t.transform.translation.x, t.transform.translation.y, t.transform.translation.z,]

                # transform to robot frame
                self.robot_to_palete = [self.t5[0] - self.camera_to_base[0], self.t5[1] - self.camera_to_base[1], self.t5[2] - self.camera_to_base[2]]

                paint.palete = self.robot_to_palete

            except TransformException as ex:
                self.get_logger().info(f"Could not transform {camera_frame} to {tag_frame5}: {ex}")
                paint.palete = []

            # publish to topic
            self.pub_paint.publish(paint)

    def camera_to_robot_transform(self):

        Pr = self.base_to_ee
        Pc = self.camera_to_ee

        Px = Pc[0] - Pr[1]
        Py = Pc[1] + Pr[0]
        Pz = Pc[2] + Pr[2]

        return [Px, Py, Pz]

def main(args=None):
    """Run node function."""
    rclpy.init(args=args)
    listen_node = listener()
    rclpy.spin(listen_node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()