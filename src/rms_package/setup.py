from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'rms_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*_launch.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='marcel',
    maintainer_email='marcel.skrok@onet.pl',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "lidar_handler = rms_package.lidar_script:main",
            "camera_handler = rms_package.camera_script:main",
            "sensor_error_handler = rms_package.component_error_handler:main",
            "robot_state_monitor = rms_package.state_monitor:main"
        ],
    },
)
