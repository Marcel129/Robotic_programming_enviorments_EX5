#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from example_interfaces.srv import SetBool

class StateMonitor(Node):
    def __init__(self):
        super().__init__("state_monitor")
        self.cameraSubscriber = self.create_subscription(Bool, "/camera_state", self.camera_callback, 10)
        self.lidarSubscriber = self.create_subscription(Bool, "/lidar_state", self.lidar_callback, 10)

        self.cliLidar = self.create_client(SetBool, 'lidar_error_handler')
        while not self.cliLidar.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('lidar service not available, waiting again...')
        self.reqLidar = SetBool.Request()

        self.get_logger().info("State monitor has been started!")
        
        # super().__init__("camera_error_handler_cli")
        # self.cliCamera = self.create_client(SetBool, 'camera_error_handler')
        # while not self.cliCamera.wait_for_service(timeout_sec=1.0):
        #     self.get_logger().info('camera service not available, waiting again...')
        # self.reqCamera = SetBool.Request()

    def send_reset_request(self, sensorNo):
        if sensorNo == 1:
            self.reqLidar.data = True
            self.cliLidar.call_async(self.reqLidar)
            self.get_logger().info("LIDAR failed! Reset request sent.")
        # elif sensorNo == 2:
        #     self.reqCamera.data = True
        #     return self.cliCamera.call_async(self.reqCamera)
        else:
            self.get_logger().info('Unrecognized sensor')

    def camera_callback(self, msg: Bool):
        if msg.data:
            self.get_logger().info("Camera OK")
        else:
            # self.send_reset_request(1)
            self.get_logger().info("Camera failed! Reset request sent.")

    def lidar_callback(self, msg: Bool):
        if msg.data:
            self.get_logger().info("LIDAR OK")
        else:
            self.send_reset_request(1)
            

def main(args=None):
    rclpy.init(args=args)
    node = StateMonitor()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    