#include <stdio.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <filesystem>
#include <cstring>
#include <string>
#include <regex>

namespace fs = std::filesystem;
using namespace std;

void Example_1();
void Example_2();
void Example_3();
void Example_4();
void Example_5();

int main()
{
	Example_5();
	return 0;
}

void toUpper()
{

}

void Example_5() // path and word count
{
	vector<string> allFiles{};
	vector<string> txtFiles{};

	std::string path = "Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]/";
    for (const auto & entry : fs::directory_iterator(path))
	{
		//std::cout << entry.path() << std::endl;
		allFiles.push_back(entry.path());

	}
	for(const auto pt: allFiles)
	{
		if(pt.find(".txt", 0) != -1){
			txtFiles.push_back(pt);
		}
	}
	for(const auto txt: txtFiles)
	{
		//cout << txt << endl;
	}

	// STEP 2: DECLARATION OF VARIABLES
	ifstream in_file{};
	string line {};
	int word_count{0};
	string word_to_find {};
	int line_count {};
	int pos {};

	// PROMPTING FOR INPUT AND SETTING WIDTH
	cout << "type the word you want to find" << endl;
	cin >> word_to_find;
	cout << setw(100) << setfill(' ') << left << "Path"
		 << "word count" << endl;

	// LOOPING THROUGH EACH TXT FILE
	for(const string _path: txtFiles)
	{
		in_file.open(_path);
		if(!in_file)
		{
			cerr << "Error opening the file" << endl;

		}

		cout << setw(100) << setfill(' ') << left <<  _path;
		while(!in_file.eof())
		{
			getline(in_file, line);
			if(line.find(word_to_find, 0) != -1)
			{
				word_count++;
				pos = line.find(word_to_find, 0);
				line.replace(pos, word_to_find.length(),"*****");
				cout << "[" << line_count << "] " << line << endl;
			}
			line_count++;
		}
		cout << word_count;
		word_count = 0;
		cout << endl;
		in_file.close();
	}
	cout << endl;
}

// 1. set all text in a stream toupper(EASY)
	//using fstream,transform
// 2. search for a word in a stream and turn it to upper(INTERMEDIATE)
	//using fstream,transform,??
// 3. search for a word in a stream, output the line of the words last occurence.(INTERMEDIATE)
	//using ??
// 4. search for a word in a stream of txt file(HARD)
	//then outputs each line where the word is found, word should be all caps in the output
	//create a new file copying the output above
// 5. put each word of a stream in a vector, reverse it then put it in a new text file(HARD)
// 6. multiple word search. search in a stream all the string in a vector,
	//output each line numbered, searched word capitalized
// 6. lotto cheat logic
