#include "safedds.h"
#include <iostream>

int main() {
    SafeDDS dds;

    try {
        dds.publish("example_topic", "Hello DDS");
        std::string message = dds.subscribe("example_topic");
        std::cout << "Received: " << message << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
