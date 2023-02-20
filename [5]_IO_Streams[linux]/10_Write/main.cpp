#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <filesystem>
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
}

void Example_1() //writing fixed string into a file
{
	ifstream in_file{};
	ofstream out_file{"Documents/IO_Streams/10_Write/sample.txt"};
	string line
	{
		"Hello, my name is marti \n"
		"do you have any business with our shop? \n"
	};

	if(!in_file)
	{
		cerr << "file open error" << endl;
	}
	if(!out_file)
	{
		cerr << "file create error" << endl;
	}

	out_file << line;

	in_file.close();
	out_file.close();

}

void Example_2() //wirting lines through cin
{
	ifstream in_file{};
	ofstream out_file{"Documents/IO_Streams/10_Write/sample.txt"};
	string line{};
	bool _continue {true};
	char choice {};

	if(!in_file)
	{
		cerr << "file open error" << endl;
	}
	if(!out_file)
	{
		cerr << "file create error" << endl;
	}

	while(_continue)
	{
		cout << "\nWrite a line(Y/N)?\n";
		cin >> choice;
		if(choice == 'Y' || choice == 'y')
		{
			cout << "Write string \n";
			cin >> line;
			out_file << (line + "\n");
		}
		else
		{
			_continue = false;
			cout << "program end\n";
		}
	}

	in_file.close();
	out_file.close();
}

void Example_3() // copying origin to sample
{
	ifstream in_file{"Documents/IO_Streams/10_Write/bible.txt"};
	ofstream out_file{"Documents/IO_Streams/10_Write/sample.txt"};
	string line
	{};

	if(!in_file)
	{
		cerr << "file open error" << endl;
	}
	if(!out_file)
	{
		cerr << "file create error" << endl;
	}

	while(getline(in_file, line))
	{
		out_file << (line+"\n");
	}
	cout << "copied successfully!" << endl;

	in_file.close();
	out_file.close();
}

void Example_4() // copying one char at a time
{
	ifstream in_file{"Documents/IO_Streams/10_Write/origin.txt"};
	ofstream out_file{"Documents/IO_Streams/10_Write/sample.txt"};
	char c
	{};

	if(!in_file)
	{
		cerr << "file open error" << endl;
	}
	if(!out_file)
	{
		cerr << "file create error" << endl;
	}

	while(in_file.get(c))
	{
		out_file.put(c);
	}
	cout << "copied successfully!" << endl;

	in_file.close();
	out_file.close();
}

void Example_5() // path and word count
{
	vector<string> allFiles{};
	vector<string> txtFiles{};

	std::string path = "Documents/IO_Streams/10_Write/";
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



	ifstream in_file{};
	string line {};
	int word_count{0};
	string word_to_find {};

	cout << "type the word you want to find" << endl;
	cin >> word_to_find;

	cout << setw(50) << setfill(' ') << left << "Path"
		 << "word count" << endl;
	for(const string _path: txtFiles)
	{
		in_file.open(_path);
		if(!in_file)
		{
			cerr << "Error opening the file" << endl;

		}

		cout << setw(50) << setfill(' ') << left <<  _path;
		while(!in_file.eof())
		{
			getline(in_file, line);
			if(line.find(word_to_find, 0) != -1)
			{
				word_count++;
			}
		}
		cout << word_count;
		word_count = 0;
		cout << endl;
		in_file.close();
	}
	cout << endl;
}
