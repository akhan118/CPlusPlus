/*
 *  RomanTypeIMPL.h
 *  week2
 *
 *  Created by akhan on 10/2/12.
 *  
	Class romanType is delcared here
 *
 */


using namespace std;
class romanType
{
public:
	//// a function to store the numerical
	void StoreNumberAsNumeral( string inputRoman);
	
	// a function to covert to decmial
	void convertToDecimal();
	
	// a function to output 
	void print();

	
	/// a destructor to free memory after the use of a pointer
	~romanType();
		
private:
	
	/// string coming from the user input
   string  RomanNumerical;

	/// a pointer
	int* decimalform ;
	
	
	/// a variable to hold string lenght.
	int stringlen;
	

};


