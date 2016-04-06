#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main (int argc, char * const argv[]) {
	
    
	int stringlen;
	
	
	string  input;
	
	cout << "Please enter a  string";
	cout << endl;
	
	getline(cin,input);

	cout << "You entered: " << input  << endl << endl;
	
	 stringlen=input.length();
	
	//cout << stringlenght;
	
	
	char *inputArray= new char[stringlen];
	
	
	for (int i=0; i < stringlen; i ++) {
      
		inputArray[i]=input[i];}
	
	for (int k=0; k< stringlen; k++) {
		cout << static_cast<char>( toupper(inputArray[k]));
	}
	
	delete []inputArray;
	
	cout<< endl;
	system("pause");
}
