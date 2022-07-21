#include "Car.h"
#include "Boat.h"
#include "Airplane.h"

int main()
{
	// car
	Car *myCar = new Car(2019, 20, "BMW");
	myCar->Drive(10);
	cout << "Car:" << endl;
	myCar->Display();
	delete myCar;

	// boat
	Boat *myBoat = new Boat(2020, 1000, "Bertram");
	myBoat->Drive(100);
	cout << "Boat:" << endl;
	myBoat->Display();
	delete myBoat;

	// airplane
	Airplane* myAirplane = new Airplane(2016, 2000, "Boeing");
	myAirplane->Drive(300);
	cout << "Airplane:" << endl;
	myAirplane->Display();
	delete myAirplane;

	return 0;
}