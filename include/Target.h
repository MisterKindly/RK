#ifndef TARGET_H
#define TARGET_H

#include <string>

class Target 
{
public:
    virtual ~Target() = default;
    virtual std::string Request() const;
};

#endif
