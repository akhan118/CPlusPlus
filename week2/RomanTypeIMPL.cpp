/*
 *  RomanTypeIMPL.cpp
 *  week2
 *
 *  Created by akhan on 5/23/12.
 *  
    This is  the implmentation file where I define the functions for class romanType
 
 *
 */

#include <iostream>
#include "RomanType.h"

using namespace std;




//// function store a number, it need a string argument and it will update a private varaibles
void romanType ::StoreNumberAsNumeral( string inputRoman)
{
	RomanNumerical=inputRoman;

	stringlen=inputRoman.length();

}





/// function to convert from Roman Numerical to Decimals
//// function update a pointer array call decimalform that is also declared as private.

void romanType ::convertToDecimal()

{

decimalform= new int [RomanNumerical.length()];
	
	
for (int j=0; j< RomanNumerical.length(); j++) {
	
	
	if (RomanNumerical[j] == 'M') {
		
		//cout << "M was found";
		
		decimalform[j]=1000;
	}
	else if(RomanNumerical[j] == 'D'){
	
		decimalform[j]=500;

	
	}	
	
	else if(RomanNumerical[j] == 'C'){
		
		decimalform[j]=100;
		
		
	}
	
	
	else if(RomanNumerical[j] == 'L'){
		
		decimalform[j]=50;
		
		
	}	
	
	
	else if(RomanNumerical[j] == 'X'){
		
		decimalform[j]=10;
		
		
	}
	
	else if(RomanNumerical[j] == 'V'){
		
		decimalform[j]=5;
		
		
	}	
	
	else if(RomanNumerical[j] == 'I'){
		
		decimalform[j]=1;
		
		
	}	
	else {
		decimalform[j]=0;

	}

	
	
	//cout << RomanNumerical[j];
	
}
	
	
}



//// function print, this function access the varaible decimalform and output the converated numbers

void romanType :: print()

{		int total=0;
	
	
	for(int i=0; i< stringlen; i++)
	
{
	total+=decimalform[i];
	
}
	
	cout << total;

}




//// this is a destructor that free memory for the pointer decimalform.
romanType::~romanType()
{

	delete []decimalform;



}
