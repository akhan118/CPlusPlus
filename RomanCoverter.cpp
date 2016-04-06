/*
 
 Author name= Ahmad Khan
 date= OCt 2 2012
 Program: a Program to would convert from numeral to Decimal . 
 This program require a class name RomanType, that is in the header file RomanType.h
 and defined in the RomanTypeIMPL.ccp
 
 
 */





#include <iostream>
#include <string>
#include <sstream>
#include "RomanType.h"
using namespace std;


int main (int argc, char * const argv[]) {
	
	/// variable to capture input
	string Romaninput;
	
	
	
	cout << "Please enter a Roman numeral ";
	cout << endl;
	/// getting user input
	getline(cin,Romaninput);
	
	/// outputing user input.
	cout << "You entered: " << Romaninput  << endl << endl;
	
	
	
	/// initating an object from Roman Type
	romanType object_Roman;
	
	
	///  a. a method to store number in roman numerical 
	////  Roman input is passed as an argument.
    object_Roman.StoreNumberAsNumeral(Romaninput);
	
	
	/// b. a method to convert from Roman to Decimal
	object_Roman.convertToDecimal();
	
	cout << "The Roman Numeral Converted into Decimal is = ";
	///c. a method to print the converted numerals.
	object_Roman.print();
	
	
	
	cout<< endl;
	system("PAUSE");

	
	return 0;


	
}


