#include <iostream>
//Sarah Sedy HW6 14.3 172.1//
using namespace std;

class Circle
{
private:
	double radius;
	static int numberOfObjects;

public:
	Circle()
		Circle(double) :
		double getArea() const;
	double getRadius() const;
	void setRadius(double);
	static int getNumberOfObjects();
};

int Circle::numberOfObjects = 0;

//builds circle//
Circle :: Circle (double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

//returns area of this circle//
double Circle::getArea() const {
	return radius * radius * 3.14159265;
}

//returns radius of circle//
double Circle::getRadius() const {
	return radius;
}

//sets new radius//
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;

}

//return the number of circles//
int Circle::getNumberOfObjects()
{
return numberOfObjects;

}