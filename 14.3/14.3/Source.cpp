#include <iostream>

//Sarah Sedy HW6 14.3 172.1//
using namespace std;

class Circle
{
private:
	double radius;
	static int numberOfObjects;
public:
	Circle();
	Circle(double);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int numberOfObjects;


};

int Circle::numberOfObjects = 0;

//builds the circle object//
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

//builds another circle object//
double Circle::getArea() Const
{
	return radius * radius * 3.14159265;

//return the radius// 
	double Circle::getRadius() const
	{
		return radius;
	}

	//Set a new radius//
	void Circle::setRadius(double newRadius) {
		radius = (newRadius >= 0) ? newRadius : 0;
	}

	//counts number of circles//
	int Circle::getNumberOfObjects()
	{
		return numberOfObjects;
	}
}