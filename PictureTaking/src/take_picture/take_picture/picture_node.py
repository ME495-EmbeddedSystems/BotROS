import pcl
import rclpy
from rclpy.node import Node
import sensor_msgs_py.point_cloud2

from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import Image
from example_interfaces.srv import Trigger
import numpy as np
from cv_bridge import CvBridge
import cv2

#goal of this node: take a picture with the real sense according to a service call (?) 
#do processing on the image--use the depth cloud points to remove background objects 
#do the edge detection and then publish the points for the robot to follow onto a topic 


class picture_node(Node):
    def __init__(self):
        
        super().__init__("picture_node")

        self.camera_rgb_subscriber = self.create_subscription(Image,'/camera/color/image_raw',self.image_callback,10)

        self.save_service = self.create_service(Trigger, 'save_image', self.save_image_callback)

        self.bridge = CvBridge()

        # self._sub = self.create_subscription(PointCloud2, "pcl_handler", self.pcl_handler, 10)
        # self._cropped = self.create_publisher(PointCloud2, "pcl_cropped", 10)
        # self._voxel = self.create_publisher(PointCloud2, "pcl_voxel", 10)
        # self._voxel = self.create_publisher(PointCloud2, "pcl_voxel", 10)
        # self._inplane = self.create_publisher(PointCloud2, "pcl_inplane", 10)

    def image_callback(self,msg): 
        # self.get_logger().info("Receiving image") 
        self.last_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8') 


    def save_image_callback(self, request, response):
        if self.last_image is not None:
            cv2.imwrite('saved_image.png', self.last_image)
            response.success = True
            response.message = "image saved successfully."
        else:
            response.success = False
            response.message = "no image to save."
        return response

    # def pcl_handler(self, pcl_msg: PointCloud2):
    #     # Convert ROS2 message to a PointCloud used by PCL
    #     pcl_in = pcl.PointCloud(sensor_msgs_py.point_cloud2.read_points_numpy(pcl_msg, ["x", "y", "z"]))

    #     # Apply the CropBox filter to remove points that are outside of a given bounding box
    #     crop_box = pcl_in.make_cropbox()
    #     # xmin, ymin, zmin, 1.0 (homogenous point of the lower left corner)
    #     # xmax, ymax, zmax, 1.0 (homogenous point of the upper right corner)
    #     crop_box.set_MinMax(-0.75, -0.6, 0.1, 1.0,
    #      0.5, 0.1, 2.0, 1.0)
    #     pcl_cropped = crop_box.filter()

    #     # Convert output point cloud to a ros message
    #     cropped_msg = sensor_msgs_py.point_cloud2.create_cloud_xyz32(pcl_msg.header,pcl_cropped.to_array()
    #     )

    #     # Publish the cropped point cloud
    #     self._cropped.publish(cropped_msg)

    #     # Downsample the point cloud to create a less dense point cloud which
    #     # decreases processing time and puts points on a regular grid
    #     # Not necessary but it does help performance
    #     voxel_filter = pcl_cropped.make_voxel_grid_filter()
    #     voxel_filter.set_leaf_size(0.01, 0.01, 0.01)
    #     pcl_voxel = voxel_filter.filter()

    #     voxel_msg = sensor_msgs_py.point_cloud2.create_cloud_xyz32(pcl_msg.header,pcl_voxel.to_array())

    #     # publish the voxelized point cloud
    #     self._voxel.publish(voxel_msg)

    #     # segment the table from the objects
    #     segmenter = pcl_voxel.make_segmenter()
    #     segmenter.set_model_type(pcl.SACMODEL_PLANE)
    #     segmenter.set_distance_threshold(0.02)
    #     indices, coefficients = segmenter.segment()
    #     # We now have indices of the inliers of the plane
    #     # and the coefficients of that plane
    #     # Next, need to convert to point clouds
    #     if len(indices) == 0:
    #         # No plane was found
    #         return
    #     # Get all the points that lie in the plane and create a new pointcloud with them
    #     pcl_inplane = np.copy(pcl_voxel)[indices]
    #     inplane_msg = sensor_msgs_py.point_cloud2.create_cloud_xyz32(pcl_msg.header,pcl_inplane)

    #     pcl_in = pcl.PointCloud(sensor_msgs_py.point_cloud2.read_points_numpy(pcl_msg, ["x", "y", "z"]))

    #     # for p in sensor_msgs_py.point_cloud2.read_points(inplane_msg, field_names = ("x", "y", "z"), skip_nans=True):
    #         # print(" x : %f  y: %f  z: %f" %(p[0],p[1],p[2]))

    #     self._inplane.publish(inplane_msg)



def main(args=None):
    rclpy.init(args=args)
    node = picture_node()
    rclpy.spin(node)
    rclpy.shutdown()
