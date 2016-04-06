/*
 *  circleType.cpp
 *  week3
 *	Author Ahmad Khan
	
 *  
 *  Class circleType.
 *
 */

#include "circleType.h"

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//// method to set the x and y point and class pointType.
void circleType:: setTypePoint( double x , double y)

{
	setPoints(x, y);

}



/// method to set the radius
void circleType::setRadius(double cRadius)
{
	radius = cRadius;
}


/// print method that will return all circle info and x and y axis from the dervied class PointType.
void circleType::print() const
{
	cout << "The radius of the circle : " << getRadius() << endl;
	cout << "The diameter of the circle: " << calcDia() << endl;
	cout << "The area of the circle : " << calcArea() << endl;
	cout << "The circumference of the circle : " << calcCir() << endl;
	cout  << "The x and y coordinates are: ";
	cout << getX() << "," << getY() << "." << endl;
}


/// method to calculat area
double circleType::calcArea() const
{
	double pi = 3.14159;
	return (pi * (radius * radius));
}

// method to calculat circle 
double circleType::calcCir() const
{
	double pi = 3.14159;
	return (calcDia() * pi);
}

// method to get radius.
double circleType::getRadius() const
{
	return radius;
}

/// method to calculator diameter 
double circleType::calcDia() const
{
	return radius * 2;
}


//Default construtor

circleType::circleType()  
{
	radius;
	
}

