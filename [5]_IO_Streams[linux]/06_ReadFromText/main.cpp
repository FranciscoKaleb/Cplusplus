#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


using namespace std;


int main()
{

	fstream MyFile;
	string name;
	int num = 34;
	double num2 = 45.65;

	MyFile.open("Documents/IO_Streams/06_ReadFromText/sample.txt",ios::in);
	if(!MyFile)
	{
		cerr << "Problem opening file" << endl;
		return 1;
	}

	while(!MyFile.eof())
	{
		MyFile >> name >> num >> num2;
		cout << setw(10) << left << name
			 << setw(10) << left << num
			 << setw(10) << left << num2
			 << endl;
	}
	MyFile.close();
	return 0;
}
