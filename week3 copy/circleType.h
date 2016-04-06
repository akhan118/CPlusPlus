/*
 *  circleType.h
 *  week3
 *	Ahmad Khan
	class pointType; to set the point of x and y
 *  Created by akhan on 5/30/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "pointType.h"

using namespace std;

class circleType: public pointType
{
	
public:
	
	void printPoints ();

	void setTypePoint( double x , double y);
	void setRadius(double cRadius);
	
	void print() const;
	
	double getRadius() const;
	
	double calcArea() const;
	
	double calcCir() const;
	
	double calcDia() const;
	
	circleType ();
	
private:
	
	double radius;
	
};
