#pragma once
#include <iostream>
using namespace std;

#include "Vehicle.h"
class Car :
    public Vehicle
{

public:

    virtual string start() override;
    virtual string stop() override;
};

