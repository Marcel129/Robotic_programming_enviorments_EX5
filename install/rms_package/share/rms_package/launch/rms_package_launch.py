from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    src_dir = '/home/marcel/studies/2_sem_mgr/RPE_lab/EX5/ros2_ws/src/rms_package/config'
    return LaunchDescription([
        Node(
            package='rms_package',
            executable='camera_handler',
            parameters=[os.path.join(
                src_dir,
                'camera_params.yaml'
            )]
        ),
        Node(
            package='rms_package',
            executable='lidar_handler',
            parameters=[os.path.join(
                src_dir,
                'lidar_params.yaml'
            )]
        ),
        Node(
            package='rms_package',
            executable='robot_state_monitor'
        )
    ])