import rclpy
from rclpy.node import Node
from listen_apriltags_interface.srv import Location
from tf2_ros.transform_listener import TransformListener
from tf2_ros.buffer import Buffer
from tf2_ros import TransformException

class listener(Node):

    def __init__(self):
        super().__init__('listener')

        # create service for paint brush positions
        self.paintbrush_service = self.create_service(Location, 'pb_location', self.pb_callback)

        # initialized transform
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.count1 = 0
        self.count2 = 0

        self.timer = self.create_timer(0.05, self.timer_callback)

        self.t1 = None
        self.t2 = None

    def timer_callback(self):
        """Print the transform from platform to brick."""
        source_frame = "camera_color_frame"
        target_frame1 = "tag36h11:0"
        target_frame2 = "tag36h11:1"

        try:
            t = self.tf_buffer.lookup_transform(
                target_frame1, source_frame, rclpy.time.Time()
            )
            self.t1 = [
                t.transform.translation.x,
                t.transform.translation.y,
                t.transform.translation.z,
            ]

            self.get_logger().info(
                f"Transform bw tag0 time {rclpy.time.Time()}"
            )

            if (self.count1 % 5) == 0:
                self.get_logger().info(
                    f"Transform tag0 x={self.t1[0]}, y={self.t1[1]}, z={self.t1[2]}"
                )

            self.count1 +=1

        except TransformException as ex:
            self.get_logger().info(
                f"Could not transform {source_frame} to {target_frame1}: {ex}"
            )

        try:
            t = self.tf_buffer.lookup_transform(
                target_frame2, source_frame, rclpy.time.Time()
            )
            self.t2 = [
                t.transform.translation.x,
                t.transform.translation.y,
                t.transform.translation.z,
            ]

            self.get_logger().info(
                f"Transform bw tag1 time {rclpy.time.Time()}"
            )

            if (self.count2 % 5) == 0:
                self.get_logger().info(
                    f"Transform tag0 x={self.t2[0]}, y={self.t2[1]}, z={self.t2[2]}"
                )

            self.count2 +=1

        except TransformException as ex:
            self.get_logger().info(
                f"Could not transform {source_frame} to {target_frame2}: {ex}"
            )

    def pb_callback(self, request, response):

        if self.t1 is not None:
            response.red = self.t1
        else:
            response.red = []
        
        if self.t2 is not None:
            response.blue = self.t2
        else:
            response.blue = []

        self.get_logger().info('In service callback')
        print(response.red)
        print(response.blue)

        return response

def main(args=None):
    """Run node function."""
    rclpy.init(args=args)
    listen_node = listener()
    rclpy.spin(listen_node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()