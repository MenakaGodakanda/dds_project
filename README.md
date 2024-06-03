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

The output should indicate that the project was built successfully: <br><br>
![Screenshot 2024-06-02 231426](https://github.com/MenakaGodakanda/dds_project/assets/156875412/16544d89-0729-4352-94c9-c3f8f771d20c) <br><br>
![Screenshot 2024-06-02 231452](https://github.com/MenakaGodakanda/dds_project/assets/156875412/5c7e42a1-4cfd-4d70-b43e-5a95846fc58c)


## Running the Example
### Run the Example Program:

Navigate to the build directory and run the example executable:

```sh
./example
```

The output should display the following, indicating that the SafeDDS class is working correctly: <br><br>
![Screenshot 2024-06-02 231410](https://github.com/MenakaGodakanda/dds_project/assets/156875412/9a15a9fa-ca5f-427e-be64-43c07aec40cf)



## Running the Tests
### Run the Tests:

Execute the tests using CTest:

```sh
ctest
```

The output should show that all tests passed: <br><br>
![Screenshot 2024-06-02 231526](https://github.com/MenakaGodakanda/dds_project/assets/156875412/090e5422-ae32-4dcc-a212-f72bb16184a9)


## File Structure
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

## Usage
Include the library in your project and use the SafeDDS class for safe publish-subscribe communication.

## License
This project is licensed under the MIT License.
