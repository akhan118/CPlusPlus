/*
 *  pointType.h
 *  week3
 *
 *  Created by akhan on 5/29/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */


using namespace std;

class pointType
{
public:
	
	void setPoints(double pointX, double pointY);
	
	void print() const;
	
	double getX() const;
	
	double getY() const;
	
	pointType();
	

	
private:
	
	double x;
	double y;


};


