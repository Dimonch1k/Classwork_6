#pragma once
#include <iostream>
using namespace std;

#include "Vehicle.h"
class Motorcycle :
    public Vehicle
{

public:
    virtual string rearWheelDrive() override;
    virtual string drivingNoHands() override;
};

