#include <iostream>
using namespace std;

class myArray {
public:
	
	
	/// CONSTRUCTOR WITH ONE PARAMETER 
	myArray(int n);
	
	
	/// CONSTRUCTOR WITH TWO PARAMETERS
	myArray(int n, int m) ;
	
	
	/// OVERLOADING []
	int operator[](int index);
	
	/// PRIVATE VARIABLES 
private:
	int start;
	int end;
	int *array;
};


	/// CONSTRUCTOR WITH ONE PARAMTER

	myArray :: myArray(int n) {
	start = 0;
	end = n-1;
	array = new int[n];
	for (int i=0; i<n; i++) array[i] = i + 1;
	}


	/// CONSTRUCTOR 2 PARAMTERS 
	myArray ::myArray(int n, int v) {
	start = n;
	end = v - 1;
	array = new int[v-n];
	for (int i=0; i<v-n; i++) array[i] = start + i;
	}


	/// FUNCTION OVER LOAD
	int myArray::operator[](int index) {
	if (index>=start && index<=end) {
		return (array[index-start]);
	}
	cout << "Error: Index out of bound" << endl;
	exit(1);
	}











int main() 
{
	myArray list(5);
	myArray myList(2,13);
	myArray yourList(-5,9);
	int i;
	
	cout << "Elements in list: " ;
	for (i=0; i<5; i++) cout << list[i] << " ";
	cout << endl;
	cout << "Elements in myList: ";
	for (i=2; i<13; i++) cout << myList[i] << " ";
	cout << endl;
	cout << "Elements in yourList: ";
	for (i=-5; i<9; i++) cout << yourList[i] << " ";
	cout << endl;
	
	cout << "Accessing list(6): " << endl; 
	cout << list[6];

	system("PAUSE");
	
	return 0;
}