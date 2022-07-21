#include "Vehicle.h"

Vehicle::Vehicle()
{
	m_year = 0;
	m_miles = 0;
	m_brand = "";
}

// destructor
Vehicle::~Vehicle() {}

// accessors
int Vehicle::GetYear() { return m_year; }
int Vehicle::GetMiles() { return m_miles; }
string Vehicle::GetBrand() { return m_brand; }

void Vehicle::SetYear(int year)
{
	m_year = year;
}

void Vehicle::SetMiles(int miles)
{
	m_miles = miles;
}

void Vehicle::SetBrand(string brand)
{
	m_brand = brand;
}