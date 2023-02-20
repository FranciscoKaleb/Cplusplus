#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

	string path{"Documents/IO_Streams/09_SectionChallenge/psalm119.txt"};
	ifstream MyFile{};
	string line {};
	string word {};

	int line_count {1};
	int word_count {0};

	cout << "Type the string you want to find" << endl;
	cin >> word;
	cout << endl;

	MyFile.open(path, ios::in);

	if(!MyFile)
	{
		cerr << "Problem opening the file";
		return 1;
	}

	while(!MyFile.eof())
	{
		getline(MyFile, line);
		if(line.find(word, 0) != -1)
		{
			cout << "[" << line_count << "]" << line << endl;
			word_count++;
		}

		line_count++;
	}
	cout << endl;
	cout << "word appears " << word_count << " times" << endl;

	cout << endl;
	MyFile.close();

	return 0;
}


