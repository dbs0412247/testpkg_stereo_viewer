cmake_minimum_required(VERSION 2.8.11)
project(testpkg_stereo_viewer)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  image_transport
  message_filters
  sensor_msgs
  std_msgs
)

find_package(OpenCV 2.4 REQUIRED)
find_package(Qt5Widgets)
find_package(Boost REQUIRED COMPONENTS system)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES testpkg_stereo_view
  CATKIN_DEPENDS cv_bridge image_transport message_filters sensor_msgs std_msgs
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${Qt5Widgets_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)

qt5_wrap_ui(stereo_viewer_node_FORM
  ui/StereoWindow.ui
)

set(stereo_viewer_node_SRC
  src/stereo_viewer_node.cpp
  src/StereoWindow.cpp
)
add_executable(stereo_viewer_node
  ${stereo_viewer_node_SRC}
  ${stereo_viewer_node_FORM}
)

target_link_libraries(stereo_viewer_node
  ${catkin_LIBRARIES}
  Qt5::Widgets
)
