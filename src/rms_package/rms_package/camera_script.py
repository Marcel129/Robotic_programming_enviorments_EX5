#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from rms_interfaces.msg import SensorState
from std_srvs.srv import Trigger

class Camera_handler(Node):
    def __init__(self):

        self.name = 'camera'

        super().__init__(f"{self.name}_handler")
        self.declare_parameters(
            namespace='',
            parameters=[
                ('msg_sending_period_s', rclpy.Parameter.Type.DOUBLE ),
                ('number_of_msg_before_fail', rclpy.Parameter.Type.INTEGER )
            ]
        )

        self.timeInterval = self.get_parameter('msg_sending_period_s').get_parameter_value().double_value
        self.maxMsgNo = self.get_parameter('number_of_msg_before_fail').get_parameter_value().integer_value

        self.cameraStatePublisher = self.create_publisher(SensorState, f"/{self.name}_state", 10)
        self.timer = self.create_timer(self.timeInterval, self.send_status)

        self.msgCounter = 0

        self.srv = self.create_service(Trigger, f'{self.name}_error_handler', self.reset_callback)

        self.get_logger().info(f"{self.name} has been started!")

    def reset_callback(self, request, response):
        self.msgCounter = 0
        response.message = self.name
        response.success = True
        
        return response

    def send_status(self):
        msg = SensorState()
        msg.sensor_name = self.name

        msg.state = self.msgCounter <= self.maxMsgNo
        self.msgCounter += 1

        self.cameraStatePublisher.publish(msg)
        


def main(args=None):
    rclpy.init(args=args)
    node = Camera_handler()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    