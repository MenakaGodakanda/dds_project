#include "safedds.h"
#include <cassert>
#include <iostream>

void testPublish() {
    SafeDDS dds;
    dds.publish("test_topic", "Test message");
    std::cout << "Publish test passed" << std::endl;
}

void testSubscribe() {
    SafeDDS dds;
    std::string message = dds.subscribe("test_topic");
    assert(message == "Message from topic: test_topic");
    std::cout << "Subscribe test passed" << std::endl;
}

int main() {
    testPublish();
    testSubscribe();
    return 0;
}
