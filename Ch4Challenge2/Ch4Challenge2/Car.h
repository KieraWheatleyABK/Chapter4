#pragma once
#include <string>

using namespace std;

// class = default private
// struct = default public

class Car
{
private:
    // member variables
    int m_year;
    int m_miles;
    string m_brand;

public:
    // constructors
    Car();
    Car(int year, int miles, string brand);

    // destructor
    ~Car();

    // setter
    void SetYear(int newYear)
    {
        m_year = newYear;
    }

    // getter
    int GetYear()
    {
        return m_year;
    }

    // setter
    void SetMiles(int newMiles)
    {
        m_miles = newMiles;
    }

    // getter

    int GetMiles()
    {
        return m_miles;
    }

    // setter
    void SetBrand(string newBrand)
    {
        m_brand = newBrand;
    }

    // getter
    string GetBrand()
    {
        return m_brand;
    }

    // member functions
    void Display();
    void Drive(int miles);
};