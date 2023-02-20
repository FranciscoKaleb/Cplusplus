#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

	ifstream MyFile;
	string line{};
	int line_count {0};
	vector<string> name;
	string answer_key;
	vector<string> answers;
	int score {0};


	MyFile.open("Documents/IO_Streams/08_SectionChallenge/responses.txt");
	if(!MyFile)
	{
		cerr << "Problem opening the file";
		return 1;
	}

	while(!MyFile.eof())
	{
		if(line_count == 1)
		{
			answer_key = line;
		}
		line_count = line_count + 1;

		getline(MyFile, line);

		cout <<"[" << line_count << "]" << line << endl;

		if(line_count%2 == 0) //meaning even line
		{
			name.push_back(line);
		}
		if(line_count%2 != 0 && line_count != 1)
		{
			answers.push_back(line);
		}

	}

	cout << endl << endl;
	cout << "Correct answer: " << answer_key << endl << endl;
	cout << setw(10) << setfill(' ') << left << "Name"
		 << setw(10) << setfill(' ') << right << "Answers"
		 << setw(10) << setfill(' ') << right << "Score" << endl
		 << setw(30) << setfill('-') << "" << endl;


	for(size_t i = 0; i < name.size(); i++)
	{
		cout << setw(10) << setfill(' ') << left << name[i]
			 << setw(10) << setfill(' ') << right << answers[i];

		for(size_t j = 0; j < answers[i].size(); j++)
		{
			if(answers[i][j] == answer_key[j])
			{
				score++;
			}
		}

		cout << setw(10) << setfill(' ') << right << score << endl;
		score = 0;
	}
	cout << setw(30) << setfill('-') << "" << endl;
	return 0;
}

//step 1 is loop over the lines of the file using while(!MyFile.eof())
//step 2 count each line
//step 3 push the strings in the odd line number to name vector
//step 4 pusht the strings in the even line to score vector
//step 5 get the average of score
//step 6 print the vectors using setw and fill
