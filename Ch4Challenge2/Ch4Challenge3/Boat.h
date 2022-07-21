#pragma once
#include "Vehicle.h"

class Boat : public Vehicle
{
public:
    // constructors
    Boat();
    Boat(int year, int miles, string brand) :
        Vehicle(year, miles, brand) {}

    // destructor
    virtual ~Boat();
};