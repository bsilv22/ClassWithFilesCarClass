#include "Car1.h"

Car::Car() { year = 2021; speed = 0; color = "red"; } //How to make a default constructor??
//Car::Car()   =  this is where parameter constructer goes, in the slides "Classes p1" 



int Car::GetYear() { return year; }  //::Car makes the compiler look in the class Car or it wont find that function
int Car::GetSpeed() { return speed; }
string Car::GetColor() { return color; }
void Car::SetYear(int newYear) { year = newYear; }
void Car::SetSpeed(int newSpeed) { speed = newSpeed; }
void Car::SetColor(string newColor) { color = newColor; }