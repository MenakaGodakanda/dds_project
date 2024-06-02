#include "safedds.h"
#include <iostream>
#include <stdexcept>

void SafeDDS::publish(const std::string& topic, const std::string& message) {
    if (validateMessage(message)) {
        // Publish message to the topic
        std::cout << "Publishing to topic: " << topic << " Message: " << message << std::endl;
    } else {
        throw std::runtime_error("Invalid message");
    }
}

std::string SafeDDS::subscribe(const std::string& topic) {
    // Simulate subscribing to a topic and receiving a message
    std::string received_message = "Message from topic: " + topic;
    if (validateMessage(received_message)) {
        return received_message;
    } else {
        throw std::runtime_error("Received invalid message");
    }
}

bool SafeDDS::validateMessage(const std::string& message) {
    // Simple validation logic
    return !message.empty();
}
