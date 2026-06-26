#ifndef HELLOCLASS_H
#define HELLOCLASS_H

#include <iostream>

class HelloClass
{
private:
    std::string helloStr;
    int helloCount;

public:
    HelloClass(std::string _helloStr, int _helloCount);
    void sayHello() const;
};


#endif