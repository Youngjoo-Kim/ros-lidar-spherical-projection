cmake_minimum_required(VERSION 2.8.3)
project(ros-lidar-spherical-projection)
add_compile_options(-std=c++14)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  sensor_msgs
  pcl_ros
  pcl_conversions
  cv_bridge
  image_transport
)

find_package(PCL REQUIRED)
find_package(OpenCV REQUIRED)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES ros-lidar-spherical-projection
#  CATKIN_DEPENDS roscpp rospy sensor_msgs
#  DEPENDS system_lib
)

include_directories(
  # include
  ${catkin_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS}
)

add_executable(lidar_spherical_projection src/lidar_spherical_projection.cpp)
target_link_libraries(
  lidar_spherical_projection 
  ${catkin_LIBRARIES} 
  ${PCL_LIBRARIES} 
  ${OpenCV_LIBS}
)