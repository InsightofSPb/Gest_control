# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "realtime_tools;roscpp;hardware_interface;pluginlib;controller_interface;sensor_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ljoint_read_command_controller".split(';') if "-ljoint_read_command_controller" != "" else []
PROJECT_NAME = "joint_read_command_controller"
PROJECT_SPACE_DIR = "/home/alexander/project/install"
PROJECT_VERSION = "0.13.2"
