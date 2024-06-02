cmake_minimum_required(VERSION 3.10)

# Project name
project(DDSProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Create library
add_library(dds SHARED ${SOURCES})

# Example executable
add_executable(example examples/example.cpp)
target_link_libraries(example dds)

# Enable testing
enable_testing()
add_subdirectory(tests)
