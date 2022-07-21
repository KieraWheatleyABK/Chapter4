#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
public:
    // constructors
    Car();
    Car(int year, int miles, string brand) :
        Vehicle(year, miles, brand) {}

    // destructor
    virtual ~Car();
};