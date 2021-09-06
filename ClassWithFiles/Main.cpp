#include <iostream>
#include "Car1.h"
using namespace std;


int main()
{
	Car c;
	c.SetColor("red");
	c.SetYear(2022);
	c.SetSpeed(10);

	Car ar[5]; //making an array of cars
	ar[0].SetYear(2021); //setting that place in the arrays year of car

}