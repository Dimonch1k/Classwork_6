#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
public:
	virtual string start();
	virtual string stop();
	virtual string rearWheelDrive();
	virtual string drivingNoHands();
};

