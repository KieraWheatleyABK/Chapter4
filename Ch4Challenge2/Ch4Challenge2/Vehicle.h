#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Vehicle 
{
protected:
    // member variables
    int m_year;
    int m_miles;
    string m_brand;
public:
    // construtors
    Vehicle();

    Vehicle(int year, int miles, string brand) :
        m_year(year),
        m_miles(miles),
        m_brand(brand) {}

    // destructor
    virtual ~Vehicle();

    // accessors
    int GetYear();
    int GetMiles();
    string GetBrand();
    void SetYear(int year);
    void SetMiles(int miles);
    void SetBrand(string brand);

    // functions
    void Drive(int miles)
    {
        m_miles += miles;
    }

    void Display()
    {
        cout << "Brand: " << m_brand << endl;
        cout << "Year: " << m_year << endl;
        cout << "Miles: " << m_miles << endl;
        cout << "\n" << endl;
    }
};