#ifndef DDS_H
#define DDS_H

#include <string>
#include <vector>

class DDS {
public:
    virtual ~DDS() = default;
    virtual void publish(const std::string& topic, const std::string& message) = 0;
    virtual std::string subscribe(const std::string& topic) = 0;
};

#endif // DDS_H
