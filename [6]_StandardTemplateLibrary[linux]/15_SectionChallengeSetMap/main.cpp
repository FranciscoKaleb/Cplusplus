#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

void remove_non_alpha(string &s);

int main()
{
    // [1] declare the needed variables
    map<string,int> words {};
    string line {};
    string string_copy {};
    string temp {};
    ifstream in_file {};
    int count {0};

    // [2] open the text document to be readed
    in_file.open("Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]/15_SectionChallengeSetMap/text1.txt");
    if(!in_file)
    {
        cerr << "Problem opening the file" << endl;
    }

    // [3] loop through each line of the document and copy it to a string
    while(!in_file.eof())
    {
        getline(in_file, line);
        string_copy = string_copy + line + "\n";
        //cout << line << endl;
    }
    // [4] check if its copied using cout
    cout << endl;
    //cout << string_copy;

    // [5] create an isstringstream object and set its value to the copied string
    istringstream iss{string_copy};

    // [6] loop through each line of stringstream object using eof() function.
    // [7] extract each word from every line using >> operator
    // [7] clean string of non-alphabet char
    // [8] insert each words in map
    while(!iss.eof())
    {
        iss >> temp;
        remove_non_alpha(temp);
        words[temp]++;
    }
    // [9] reduce last word's count by 1 to correct it.
    words[temp]--;

    // [10] loop through each map key-value pair
    for(const auto &mem:words)
    {
        count++;
        cout << "[" << count << "]" << mem.first << " : " << mem.second << endl;
    }
    // [11] close the in_file
    in_file.close();
}

// actually a very good algo
void remove_non_alpha(string &s)
{
    for(size_t i = 0; i < s.size(); i++)
    {
        if(!isalpha(s[i]))
        {
            if(s[i] == '\'' || isdigit(s[i]) || s[i] == ':')
            {

            }
            else
            {
                s.erase(i,1);
                i--;
            }

        }
    }
}




