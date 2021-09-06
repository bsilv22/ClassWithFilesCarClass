#include <string>
using namespace std;

class Car
{
	// Attributes
private:
	int year;
	int speed;
	string color;
	// Behaviors
public:
	Car(); //call here, and define in cpp file

	int GetYear();
	int GetSpeed();
	string GetColor();
	void SetYear(int newYear);
	void SetSpeed(int newSpeed);
	void SetColor(string newColor);
	// Accelerate and Decelerate not shown
};