cmake_minimum_required(VERSION 3.5)
project(vision)

## Use C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_program(CCACHE_PROGRAM ccache)
if (CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif ()

add_compile_definitions(PROJECT_DIR="${PROJECT_SOURCE_DIR}")

# add_compile_options(-Wall -Werror=return-type -Wno-unused-variable)
# if (CMAKE_BUILD_TYPE STREQUAL Release)
#     add_compile_options(-O3 -flto -march=native)
# elseif (CMAKE_BUILD_TYPE STREQUAL RelWithDebInfo)
#     add_compile_options(-O3 -flto -march=native -g)
# elseif (CMAKE_BUILD_TYPE STREQUAL MinSizeRel)
#     add_compile_options(-Os -flto -march=native)
# else ()
#     add_compile_options(-O0 -g)
# endif ()
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-deprecated")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Add DEBUG/RELEASE marco to define if debug/release configured
add_compile_options("$<$<CONFIG:DEBUG>:-DDEBUG>")
add_compile_options("$<$<CONFIG:RELEASE>:-DRELEASE>")

## By adding -Wall and -Werror, the compiler does not ignore warnings anymore,
## enforcing cleaner code.
add_definitions(-Wall -Werror)

## Export compile commands for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#######################
## Find dependencies ##
#######################

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

###########
## Build ##
###########

ament_auto_add_library(${PROJECT_NAME} SHARED
  DIRECTORY src
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN CameraNode
  EXECUTABLE camera_node
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN DetectorNode
  EXECUTABLE detector_node
)

rclcpp_components_register_node(${PROJECT_NAME}
  PLUGIN ProcessorNode
  EXECUTABLE processor_node
)

#############
## Testing ##
#############

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  list(APPEND AMENT_LINT_AUTO_EXCLUDE
    ament_cmake_copyright
    ament_cmake_uncrustify
  )
  ament_lint_auto_find_test_dependencies()

  find_package(ament_cmake_gtest)

  ament_add_gtest(test_node test/test_node.cpp)
  target_link_libraries(test_node ${PROJECT_NAME})
endif()

#############
## Install ##
#############

ament_auto_package(
  INSTALL_TO_SHARE
  config
  launch
)