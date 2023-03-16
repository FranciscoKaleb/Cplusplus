#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

int test_1();
void test_2();
void test_3();
void test_4();


int main()
{
    //test_1();
    //test_2();
    //test_3();
    test_4();
    return 0;
}

int test_1() // reading from a text file using ifstream
{
    // declare the needed variables
    ifstream in_file {};
    string line {};

    // open the text file
    in_file.open("Documents/git/Cplusplus/[5]_IO_Streams[linux]/Refresher/text1.txt");

    // check if opening is success
    if(!in_file)
    {
        cerr << "Problem opening the file" << endl;
        return 1;
    }

    // view contents of text1.txt by
    // 1. looping through each line of the txt file
    // 2. passing it to string 'line' and
    // 3. using cout to view it
    while(!in_file.eof())
    {
        getline(in_file, line);
        cout << line << endl;
    }

    // close the file
    in_file.close();
}

void test_2() // basic file write using fstream or ofstream
{
    // [1] declare the needed variables
    fstream out_file {};    // using fstream doesnt create a new file but overwrites a line
    // ofstream out_file {}; // using ofstream deletes the existing and creates a new

    // [2] open file for outstream
    out_file.open("Documents/git/Cplusplus/[5]_IO_Streams[linux]/Refresher/text1.txt");

    // [3] check if file is open
    if(!out_file)
    {
        cerr << "Problem opening the file" << endl;
    }

    // [4] write some lines in the file
    out_file << "hello dgdf\n";
    out_file << "hello dgdfer\n";

    // [5] close the file
    out_file.close();
}

void test_3()  // inserting a line in a text file by copying its contents, adding a string, recreating the file.
{
    // [1] declare the needed variables
    fstream in_file {};
    ofstream out_file {};
    int line_num {1};
    int choice {10};
    string line {};
    string copy {};
    string to_add {};
    bool copied {false};

    // [2] open the txt file using fstream variable
    in_file.open("Documents/git/Cplusplus/[5]_IO_Streams[linux]/Refresher/text1.txt");


    // [3] check if opening is successful
    if(!in_file)
    {
        cerr << "Problem opening the file" << endl;
    }
    if(!out_file)
    {
        cerr << "Problem opening the file" << endl;
    }

    // [4] loop to the file
    while(!in_file.eof())
    {
        getline(in_file, line);
        cout << "[" << line_num << "]" << line << endl;
        line_num++;
    }
    cout << "[" << line_num << "]" << endl;
    in_file.close();

    // [5] ask in what line num to insert
    while(choice > line_num)
    {
        cout << "In what line number you want to insert? " << endl;
        cin >> choice;
    }

    cin.ignore();
    // [6] ask what if want to insert
    cout << "Type the string you want to insert" << endl;
    getline(cin, to_add);


    // [7] open the file again, loop again, copy in a string , insert at condition
    line_num = 1;
    in_file.open("Documents/git/Cplusplus/[5]_IO_Streams[linux]/Refresher/text1.txt");
    while(!in_file.eof())
    {
        if(choice == line_num)
        {
            copy = copy + to_add + "\n";
            copied = true;
        }
        getline(in_file, line);
        cout << "[" << line_num << "]" << line << endl;
        copy = copy + line + "\n";
        line_num++;
    }
    if(copied == false)
    {
        copy = copy + to_add + "\n";
    }
    cout << endl;
    cout << copy;


    // [8] recreate the file using ofstream, outstream the copy string in the recreated file
    out_file.open("Documents/git/Cplusplus/[5]_IO_Streams[linux]/Refresher/text1.txt");
    out_file << copy;


    // [9] close the file
    in_file.close();
    out_file.close();
}

void test_4() // extracting every block of words in a string using istringstream
{
    vector<string> vec {};
    string words {"cow\nchicken f df"};
    string copy {};
    istringstream iss {words};

    while(!iss.eof())
    {
        iss >> copy;
        vec.push_back(copy);
    }

    for(const auto &mem:vec)
    {
        cout << mem << endl;
    }
}