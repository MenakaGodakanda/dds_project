# DDS and SafeDDS Communication Library

## Overview

This project implements a basic DDS and SafeDDS communication protocol in C++.

## Features
- Basic DDS protocol for publish-subscribe communication.
- SafeDDS protocol with message validation.

## Installation
### Prerequisites
- CMake: Build system generator.
- GCC or Clang: Compiler for C/C++.
- Git: Version control system.
- VSCode or CLion: Integrated Development Environment (IDE).

```sh
sudo apt update
sudo apt install cmake gcc g++ git
```

## Building the Project
### Clone the Repository:

Clone your repository to your local machine:

```sh
git clone https://github.com/MenakaGodakanda/dds_project.git
cd dds_project
```
### Build the Project:

Create a build directory and run CMake to generate the build files:

```sh
mkdir build
cd build
cmake ..
make
```

The output should indicate that the project was built successfully:


## Running the Example
### Run the Example Program:

Navigate to the build directory and run the example executable:

```sh
./example
```

The output should display the following, indicating that the SafeDDS class is working correctly:


## Running the Tests
### Run the Tests:

Execute the tests using CTest:

```sh
ctest
```

The output should show that all tests passed:

## File Structure
include/ - Header files
src/ - Source files
examples/ - Example programs
tests/ - Test cases
build/ - Build directory
CMakeLists.txt - CMake configuration file
Usage
Include the library in your project and use the SafeDDS class for safe publish-subscribe communication.

```
dds_project/
├── include/        # Header files
├── src/            # Source files
├── examples/       # Example programs
├── tests/          # Test cases
├── build/          # Build directory
└── CMakeLists.txt  # CMake configuration file
```

## Protocols

### DDS

The Data Distribution Service (DDS) is a real-time data-centric middleware standard that is ideal for production quality data communication. It is currently widely used in the fields of aerospace and defense, autonomous vehicles, as well as up-and-coming in robotics, medical devices, and power generation.

### SafeDDS

Safe DDS is an extension with additional safety features. This middleware aims to access DDS from a full range of CPUs and MCUs (resource-constrained systems) used in real-world critical applications.

## License
This project is licensed under the MIT License.
