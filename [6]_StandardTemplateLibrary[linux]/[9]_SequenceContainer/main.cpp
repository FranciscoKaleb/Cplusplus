#include <iostream>
#include <vector>
#include <fstream>

std::vector<std::string> StringToVectorOfWords(std::string line);

int main()
{
    std::ifstream in_file {};
	//std::string line {"Hello, My Name is Hawi! Whats your name?"};
    std::vector<std::string> B {};
    std::vector<std::string> AB;

    ////////////////////////////////////////////
    std::string fline {};
    in_file.open("Documents/git/Cplusplus/[6]_StandardTemplateLibrary[linux]/[9]_SequenceContainer/sample.txt");
    if(!in_file)
    {
        std::cerr << "error opening the file" << std::endl;
    }
    while(!in_file.eof())
    {
        getline(in_file, fline);
        //std::cout << fline << std::endl;
        B = StringToVectorOfWords(fline);
        AB.insert(AB.end(), B.begin(), B.end());
        B.clear();
    }
    ////////////////////////////////////////////

    for(size_t i = 0; i < AB.size(); i++)
    {
        std::cout << AB[i] << " ";
        for(auto &c : AB[i])
        {
            if(c == '.')
            {
                std::cout << "[period]" << std::endl;
            }
        }
    }

    return 0;
}



std::vector<std::string> StringToVectorOfWords(std::string line)
{
    std::string temp {};

    bool read_once {true};
    int w_start_pos {0};
    int letter_count {0};

    std::vector<std::string> vec {};


    for(size_t i = 0; i < line.length(); i++)
    {
        if(line[i] != ' ')
        {
            if(read_once == true)
            {
                w_start_pos = i;
                read_once = false;
            }
            letter_count++;
        }
        if(line[i] == ' ' || i == line.length()-1)
        {
            if(letter_count != 0)
            {
                temp = line.substr(w_start_pos, letter_count);
                vec.push_back(temp);
                temp = "";
            }
            letter_count = 0;
            read_once = true;
        }
    }
    return vec;
}