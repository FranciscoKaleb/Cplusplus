#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int Example_1();
int Example_2();

int main()
{
	Example_2();
	return 0;
}

int Example_1()
{
	ifstream MyFile;
	string line{};
	int lineCount {0};
	int char_count {0};
	int word_count {0};
	bool started {true};


	MyFile.open("Documents/IO_Streams/07_streams/poem.txt");

	if(!MyFile)
	{
		cerr << "Problem opening the file" << endl;
		return 1;
	}

	while(MyFile.eof() == false) // while not the end of file
	{
		//MyFile >> line;
	    //cout << line << " ";
		getline(MyFile, line);
		for(int i = 0; i < line.length(); i++)
		{
			char_count++;

			//word counting algorithm
			if(started == true && line[i] != ' ') //trigger once
			{
				word_count++;
				started = false;
			}
			if(line[i] == ' ' && line[i-1] != ' ' && line[i+1] != ' ')
			{
				word_count++;
			}

			//word counting algorithm end
		}
		cout << "[" << lineCount+1 << "] " << line << endl;
		lineCount++;
		word_count++; //if without space in the end of every line coz it counts the last word and next lines 1st word as one
	}
	word_count--; //deduct one word

	cout << endl << "characters: " << char_count << endl << "words: " << word_count << endl
		 << "lines: " << lineCount << endl <<  endl;

	MyFile.close();
}

int Example_2()
{
	ifstream MyFile;
	string line{};
	int lineCount {0};
	int char_count {0};
	int word_count {0};
	bool started {true};

	MyFile.open("Documents/IO_Streams/07_streams/poem.txt");

	if(!MyFile)
	{
		cerr << "Problem opening the file" << endl;
		return 1;
	}

	char c {};
	while(MyFile.get(c))
	{
		if(c != '\n')
		{
			char_count++;
		}
		cout << c;
	}
	cout << endl << endl;
	cout << "letters: " << char_count
		 << endl;

	MyFile.close();
}