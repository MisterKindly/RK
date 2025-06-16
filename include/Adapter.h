#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target 
{
private:
    Adaptee *adaptee_;
public:
    Adapter(Adaptee *adaptee);
    std::string Request() const override;
};

#endif
