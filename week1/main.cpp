#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main (int argc, char * const argv[]) {
	
    
	int stringlenght;
	
	
	string  input;
	
	cout << "Please enter a  in lower case string";
	cout << endl;
	
	getline(cin,input);

	cout << "You entered: " << input  << endl << endl;
	
	 stringlenght=input.length();
	
	//cout << stringlenght;
	
	
	char *inputArray;
	
	inputArray= new char[stringlenght];
	
	
	for (int i=0; i < stringlenght; i ++) {
      
		inputArray[i]=input[i];}
	
	for (int k=0; k< stringlenght; k++) {
		cout << static_cast<char>( toupper(inputArray[k]));
	}
	
	delete []inputArray;
	
	
	system("PAUSE");
	
	return 0;
}
