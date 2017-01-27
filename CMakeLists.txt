cmake_minimum_required(VERSION 2.8.7)
project(skunk C CXX)

set(CMAKE_CXX_FLAGS "-std=c++11")

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set( SOURCE
  main.cpp
)

set( HEADERS
)

set( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin )

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
find_package( Eigen3 3.3 REQUIRED NO_MODULE )

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/skunk )

include_directories( EIGEN3_INCLUDE_DIR )

link_directories( ${CMAKE_BINARY_DIR}/bin)
add_executable( ${CMAKE_PROJECT_NAME} ${SOURCE} ${HEADERS} )
target_link_libraries( ${CMAKE_PROJECT_NAME} Eigen3::Eigen )
