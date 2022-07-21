#pragma once
#include "Vehicle.h"

class Airplane : public Vehicle
{
public:
    // constructors
    Airplane();
    Airplane(int year, int miles, string brand) :
        Vehicle(year, miles, brand) {}

    // destructor
    virtual ~Airplane();
};