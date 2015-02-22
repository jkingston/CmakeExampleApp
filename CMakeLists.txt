# CMake build system

# The minimum CMake version required to build this project
cmake_minimum_required(VERSION 2.8.3)

# Set a new CMake project
set(PROJECT_NAME ExampleApp)
project(${PROJECT_NAME})

# Enable c++11
add_definitions(--std=c++11)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# Set source file directories
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

# Add library files
add_executable(${PROJECT_NAME}
  ${SRC_DIR}/ExampleApp/main.cpp
)

# Set up include directories
include_directories(
)

# Set up link directories
link_directories(
)

# Set up testing
include(CTest)
include(GTest)
add_subdirectory(test)
