//#include "pointType.h"
#include "circleType.h"
#include <iostream>

using namespace std;

int main()
{
	
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
	
		
		system ("pause");
    return 0;
}