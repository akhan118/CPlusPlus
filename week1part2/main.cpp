# include <iostream>
# include <fstream>

using namespace std;

int main()
{
	
	char * inputarray;
	
	int num=0;
	char test;
	
	ifstream infile;
	infile.open("//Users/knkenne/Desktop/test1.txt");
	while ( infile ) 
	{ 
		
		if (infile == false) 
			cout<<"Could not open the input file"<<endl;
		
		infile.get(test);
		num ++;
		
		
	}// end while 
	
	
	infile.close();
	
	
	
	inputarray= new char[num];
for (int i=0; i< num; i++) {


	infile.get(inputarray[i]);
	

}

	
	
for (int j=0;  j< num; j++) {

	cout << inputarray[j];
}	
	
	
	
	system ("pause");
}