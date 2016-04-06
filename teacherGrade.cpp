#include <iostream>
#include<fstream>
#include<istream>

using namespace std;

ifstream infile;








int main (int argc, char * const argv[]) {
	

	string stringanswers;
	
	infile.open("//Users/knkenne/Desktop/test1.txt");
	
	
	while (! infile.eof()) {
		
		infile >>stringanswers;
		cout << stringanswers;


	}
	
	


}
