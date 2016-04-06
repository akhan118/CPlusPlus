/*
 *  pointType.cpp
 *  week3
 *
 *  
 *   A class that will set the points on the x and y axis.  
 */

#include "pointType.h"


#include <iostream>
#include <iomanip>

using namespace std;


/// a method to set the points
void pointType::setPoints( double pointX, double pointY)
{
	x = pointX;
	y = pointY;
}


//// a method to get point x
double pointType::getX() const
{
	return x;
}

/// a method to get point y
double pointType::getY() const
{
	return y;
}


/// defualt  constructor
pointType::pointType()
{
	x;
	y;
}


/// a print method
void pointType::print() const
{
	cout << " x and y  are: ";
	cout << getX() << " <----> " << getY() << endl;
}


