#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	Car myCar(2019, 20, "BMW");

	myCar.Drive(10);
	myCar.Display();
}