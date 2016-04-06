#include <iostream>
#include <iomanip>
#include <cmath>

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






int main()
{
	
	//circleType circle;
	
	circleType circle;

	
	double x, y;
	
	cout << "Enter the x-coordinate: ";
	cin >> x;
	
	cout << "Enter the y-coordinate: ";
	cin >> y;
	
	circle.setTypePoint(x, y);
	
	//circle.printPoints();
	
	double r;
	
	cout << "Enter the radius of the circle: ";
	cin >> r;
	
	circle.setRadius(r);
	circle.print();
	
		
		
    return 0;
}



