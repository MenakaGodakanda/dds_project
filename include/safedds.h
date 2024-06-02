#ifndef SAFEDDS_H
#define SAFEDDS_H

#include "dds.h"

class SafeDDS : public DDS {
public:
    void publish(const std::string& topic, const std::string& message) override;
    std::string subscribe(const std::string& topic) override;

private:
    bool validateMessage(const std::string& message);
};

#endif // SAFEDDS_H
