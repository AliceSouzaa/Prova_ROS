# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target robo_interfaces::robo_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${robo_interfaces_TARGETS}.
if(robo_interfaces_TARGETS AND NOT TARGET robo_interfaces::robo_interfaces)
  add_library(robo_interfaces::robo_interfaces INTERFACE IMPORTED)
  set_target_properties(robo_interfaces::robo_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${robo_interfaces_TARGETS}")
endif()
