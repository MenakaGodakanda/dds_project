# DDS and SafeDDS Communication Library - Version 1
This project implements a basic DDS and SafeDDS communication protocol in C++. The DDS and SafeDDS communication protocol library provide a robust, secure, and scalable solution for real-time data-centric communication. This makes it suitable for a wide range of applications requiring reliable and efficient data exchange.

## Features of the project:
1. **DDS Protocol**
- Real-Time Communication: Implements the Data Distribution Service (DDS) standard, which is widely used for real-time, data-centric communication. This is particularly useful in scenarios where timely and reliable data exchange is crucial, such as in robotics, autonomous vehicles, and industrial automation.
- Publish-Subscribe Model: Utilizes a publish-subscribe communication model, where data producers (publishers) and data consumers (subscribers) are decoupled. Publishers send data on topics, and subscribers receive data by subscribing to those topics.
- Scalability: Designed to handle a large number of data sources and sinks, making it suitable for large-scale distributed systems.
- Quality of Service (QoS): Provides QoS policies to manage data delivery and resource utilization. These policies include reliability, durability, and latency settings, which can be configured to meet the specific requirements of the application.

2. **SafeDDS Protocol**
- Extended DDS Protocol: Builds on top of the DDS protocol by adding additional safety features to ensure data integrity and security.
- Message Validation: Includes message validation mechanisms to ensure that only valid data is published and received. This helps in preventing corrupted or malicious data from being processed.
- Error Handling: Implements robust error handling to manage and report issues that arise during data publication and subscription. This ensures that the system can gracefully handle unexpected situations.
- Enhanced Security: Provides mechanisms to ensure secure communication between publishers and subscribers. This can include data encryption and authentication to protect data from unauthorized access.

3. **Library Design**
- Modular Architecture: The library is designed with a modular architecture, making it easy to extend and customize. New features or protocols can be added without modifying the existing codebase significantly.
- Abstract Base Class: Defines an abstract base class DDS with pure virtual methods for publish and subscribe. This allows different implementations of the DDS protocol to be used interchangeably.
- Derived Class Implementation: Implements a SafeDDS class derived from the DDS base class, providing concrete implementations of the publish and subscribe methods along with additional safety features.

4. **Examples and Usage**
- Example Programs: Includes example programs that demonstrate how to use the SafeDDS class for publishing and subscribing to messages. These examples provide a quick start for developers to understand the library’s usage.
- Detailed Documentation: Comprehensive documentation is provided, including a README file with build instructions, usage examples, and explanations of the library's features and architecture.

5. **Testing and Validation**
- Unit Tests: The project includes unit tests to ensure the correctness and reliability of the SafeDDS class. These tests cover the main functionalities such as publishing, subscribing, and message validation.
- Automated Testing: The build system is configured to run tests automatically using CTest, ensuring that the library's functionality is validated every time it is built.

6. **Build System and Integration**
- CMake Build System: Uses CMake for managing the build process, which makes the project easy to build and integrate with other projects. CMake is widely supported and can generate build files for various platforms and IDEs.
- Cross-Platform Support: The library is designed to be cross-platform, running on Unix-based systems such as Linux and macOS. This ensures broad applicability and ease of use in different development environments.

## Understand DDS and SafeDDS Protocol:

### DDS Protocol
The Data Distribution Service (DDS) is a middleware protocol and API standard for data-centric connectivity. It aims to enable scalable, real-time, dependable, high-performance, and interoperable data exchanges between publishers and subscribers in a distributed system.

#### DDS Data Packet Structure
A typical DDS data packet (sample) might include the following fields:

1. Header:
- Protocol Version: Indicates the version of the DDS protocol.
- Vendor ID: Identifies the vendor or implementation.
- Message ID: Unique identifier for the message.

2. Topic Information:
- Topic Name: The name of the topic the data relates to.
- Topic Type: The type of data being sent (e.g., sensor data, command).

3. Data:
- Key (optional): A unique identifier for the data instance (useful for keyed data).
- Payload: The actual data being published.

4. Quality of Service (QoS):
- Reliability: Specifies whether the data should be delivered reliably.
- Durability: Specifies the persistence of the data.
- Deadline: Specifies the maximum delay allowed for data delivery.
- Lifespan: Specifies the time duration for which the data is valid.

5. Metadata (optional):
- Timestamp: When the data was published.
- Sequence Number: A counter to track the order of data samples.

```
+-------------------+
|     Header        |
+-------------------+
|  Protocol Version |
|     Vendor ID     |
|    Message ID     |
+-------------------+
|  Topic Information|
+-------------------+
|   Topic Name      |
|   Topic Type      |
+-------------------+
|       Data        |
+-------------------+
|  Key (optional)   |
|     Payload       |
+-------------------+
|       QoS         |
+-------------------+
|   Reliability     |
|    Durability     |
|     Deadline      |
|     Lifespan      |
+-------------------+
|     Metadata      |
+-------------------+
|    Timestamp      |
|  Sequence Number  |
+-------------------+
```

### SafeDDS Protocol
SafeDDS is an extension of the DDS protocol, incorporating additional safety features to ensure data integrity and security. SafeDDS enhances the basic DDS protocol by adding mechanisms for message validation, error handling, and secure communication.

#### SafeDDS Data Packet Structure
The SafeDDS data packet structure builds upon the DDS structure, adding fields for validation and security.

1. Header:
- Protocol Version: Indicates the version of the SafeDDS protocol.
- Vendor ID: Identifies the vendor or implementation.
- Message ID: Unique identifier for the message.

2. Topic Information:
- Topic Name: The name of the topic the data relates to.
- Topic Type: The type of data being sent (e.g., sensor data, command).

3. Data:
- Key (optional): A unique identifier for the data instance (useful for keyed data).
- Payload: The actual data being published.

4. Quality of Service (QoS):
- Reliability: Specifies whether the data should be delivered reliably.
- Durability: Specifies the persistence of the data.
- Deadline: Specifies the maximum delay allowed for data delivery.
- Lifespan: Specifies the time duration for which the data is valid.

5. Validation:
- Checksum: A checksum or hash of the data to ensure integrity.
- Validation Status: Status indicating whether the data has passed validation.

6. Security:
- Encryption: Indicates whether the data is encrypted.
- Authentication: Authentication information to verify the sender’s identity.

7. Metadata (optional):
- Timestamp: When the data was published.
- Sequence Number: A counter to track the order of data samples.
```
+-------------------+
|     Header        |
+-------------------+
|  Protocol Version |
|     Vendor ID     |
|    Message ID     |
+-------------------+
|  Topic Information|
+-------------------+
|   Topic Name      |
|   Topic Type      |
+-------------------+
|       Data        |
+-------------------+
|  Key (optional)   |
|     Payload       |
+-------------------+
|       QoS         |
+-------------------+
|   Reliability     |
|    Durability     |
|     Deadline      |
|     Lifespan      |
+-------------------+
|    Validation     |
+-------------------+
|     Checksum      |
| Validation Status |
+-------------------+
|     Security      |
+-------------------+
|    Encryption     |
|  Authentication   |
+-------------------+
|     Metadata      |
+-------------------+
|    Timestamp      |
|  Sequence Number  |
+-------------------+
```


## Model-based Diagram:

Below is a model-based sequence diagram illustrating the interaction between the different components in the DDS and SafeDDS communication protocol library.

```
+-------------+         +---------+         +----------+         +-----------+
|  Publisher  |         | SafeDDS |         | DDS Base |         | Subscriber|
+-------------+         +---------+         +----------+         +-----------+
      |                     |                     |                   |
      |--publish(topic, msg)--> |                 |                   |
      |                     |--validate(msg)-->   |                   |
      |                     |<--validation ok-----|                   |
      |                     |--sendToDDS(topic, msg)-> |              |
      |                     |                     |--storeMessage(topic, msg)-->|
      |                     |<--acknowledge------ |                   |
      |<--acknowledge------ |                     |                   |
      |                     |                     |                   |
      |                     |                     |<--requestSubscription(topic)--|
      |                     |<--subscribe(topic)---|                   |
      |                     |                     |                   |
      |                     |--validate(msg)-->   |                   |
      |                     |<--validation ok-----|                   |
      |                     |--receiveFromDDS(topic, msg)->|          |
      |                     |                     |                   |
      |                     |                     |--retrieveMessage(topic)--|
      |                     |                     |<--message---------|       |
      |                     |<--sendToSubscriber(msg)--|              |
      |                     |                     |                   |
      |<--receive(msg)------|                     |                   |
      |                     |                     |                   |
```

### Components of this diagram:

- Publisher: The entity that creates and sends messages to a topic.
- SafeDDS: The system that extends DDS with additional safety features like message validation and secure transmission.
- DDS Base: The base DDS system that manages topic-based data storage and retrieval.
- Subscriber: The entity that receives messages from a topic.

### Steps of this diagram:

1. Publisher Publishes a Message:
  - The publisher calls the publish method on the SafeDDS instance with the specified topic and message.
  - The SafeDDS instance validates the message to ensure its integrity.
  - Upon successful validation, SafeDDS sends the message to the DDS base system for storage.

2. DDS Base Stores the Message:
- The DDS base system stores the message in association with the specified topic.
- The DDS base system acknowledges the storage operation to SafeDDS.

3. SafeDDS Acknowledges the Publish:
- SafeDDS acknowledges the publish operation to the publisher.

4. Subscriber Subscribes to a Topic:
- The subscriber sends a subscription request to the DDS base system for a specified topic.
- The DDS base system acknowledges the subscription to the subscriber.

5. DDS Base Notifies SafeDDS:
- The DDS base system notifies SafeDDS about the subscription request.

6. SafeDDS Validates and Delivers the Message:
- SafeDDS retrieves the message from the DDS base system.
- The message is validated by SafeDDS to ensure its integrity.
- Upon successful validation, SafeDDS sends the message to the subscriber.

7. Subscriber Receives the Message:
- The subscriber receives the message and acknowledges its reception.

## Project Structure:
```
dds_project/
├── include/        # Header files
├── src/            # Source files
├── examples/       # Example programs
├── tests/          # Test cases
├── build/          # Build directory
└── CMakeLists.txt  # CMake configuration file
```

## Coding Details:

### Source File (safedds.cpp)
- This file implements the methods of the SafeDDS class.
- publish: This method validates the message, then locks the mutex to ensure thread safety while accessing topic. It then adds the message to the appropriate topic queue.
- subscribe: This method locks the mutex, checks if there are any messages for the requested topic, retrieves the oldest message, and removes it from the queue.
- validateMessage: A simple validation function that checks if the message is not empty.

### Header File (dds.h)
- This file defines the abstract base class `DDS`.
- `DDS` is an abstract base class with two pure virtual functions: `publish` and `subscribe`.
- These functions must be implemented by any derived class.

### Header File (safedds.h)
- This file defines the `SafeDDS` class that inherits from `DDS`.
- `SafeDDS` inherits from `DDS` and implements the `publish` and `subscribe` methods.
- The private method `validateMessage` is used to validate messages before publishing.

### Example Program (example.cpp)
- This file demonstrates how to use the `SafeDDS` class.
- Creates an instance of `SafeDDS`.
- Publishes a message to `example_topic`.
- Subscribes to `example_topic` and prints the received message.
- Catches and prints any exceptions that occur during publishing or subscribing.

### Test File (test_safe_dds.cpp)
- This file contains unit tests for the SafeDDS class.
- `testPublish`: Tests the basic functionality of publishing.
- `testSubscribe`: Tests the basic functionality of subscribing.
- Print a message indicating success and use assertions to ensure correctness.
