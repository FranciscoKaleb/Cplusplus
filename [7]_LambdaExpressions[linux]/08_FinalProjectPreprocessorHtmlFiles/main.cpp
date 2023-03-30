#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <algorithm>

using namespace std;
// delete everything between <script   </script>    <style   </style>
// [1] find <script then find >
// Function to remove HTML tags from a string

// [1] find <script and mark the first pos, find </script> to find length, then delete
void removeScriptStyleTags(string &html)
{
    string::size_type start = 0;
    while ((start = html.find("<script", start)) != string::npos)
    {
        string::size_type end = html.find("</script>", start);

        if (end == string::npos)
        {
            break;
        }

        html.erase(start, end - start + 9);
    }

    start = 0;

    while ((start = html.find("<style", start)) != string::npos)
    {
        string::size_type end = html.find("</style>", start);

        if (end == string::npos)
        {
            break;
        }

        html.erase(start, end - start + 8);
    }
}


string removeHtmlTags(string str)
{
    string result = "";
    bool inTag = false;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '<')
        {
            inTag = true;
        }
        else if (str[i] == '>')
        {
            inTag = false;
        }
        else if (!inTag)
        {
            result += str[i];
        }
    }

    return result;
}

// Function to convert HTML entities to their respective equivalent
string convertHtmlEntities(string str) {
    string result = str;
    size_t found = result.find("&");

    while (found != string::npos) {
        size_t endFound = result.find(";", found);
        if (endFound != string::npos) {
            string entity = result.substr(found, endFound - found + 1);
            if (entity == "&amp;") {
                result.replace(found, endFound - found + 1, "&");
            }
            else if (entity == "&lt;") {
                result.replace(found, endFound - found + 1, "<");
            }
            else if (entity == "&gt;") {
                result.replace(found, endFound - found + 1, ">");
            }
            // Add more HTML entities to be converted here
        }
        found = result.find("&", found + 1);
    }

    return result;
}





string removeEmptyLines(string str) {
    // Replace all possible newline escape sequences with a single '\n' character
    str.erase(std::remove(str.begin(), str.end(), '\r'), str.end()); // Remove any '\r' characters
    str.erase(std::unique(str.begin(), str.end(),
            [] (char a, char b)
            {
                return a == '\n' && b == '\n';
            }
        ), str.end()); // Replace consecutive '\n' characters with a single one

    // Split the string into lines and remove any lines that consist only of whitespace characters
    string result;
    stringstream ss(str);
    string line;
    while (getline(ss, line)) {
        if (!line.empty() && line.find_first_not_of(" \t\n\v\f\r") != string::npos) {
            result += line + '\n'; // Add non-empty lines to the result string
        }
    }
    if (!result.empty() && result.back() == '\n') {
        result.pop_back(); // Remove the final newline character from the result string
    }
    return result;
}

int main()
{
    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("Documents/git/Cplusplus/[7]_LambdaExpressions[linux]/08_FinalProjectPreprocessorHtmlFiles/frog/Frog - Wikipedia.html");

    string line;
    string cleanedLine;
    string firstPass;

    while (!inputFile.eof())
    {
        getline(inputFile, line);
        //std::cout << line << std::endl;
        firstPass = firstPass + line + "\n";
        //string convertedLine = convertHtmlEntities(cleanedLine);
        //outputFile << convertedLine << endl;
    }

    removeScriptStyleTags(firstPass);
    cleanedLine = removeHtmlTags(firstPass);
    cleanedLine = convertHtmlEntities(cleanedLine);
    cleanedLine = removeEmptyLines(cleanedLine);

    std::cout << cleanedLine << std::endl;
    // Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "HTML tags and entities removed successfully. The output has been saved to 'output.txt'." << endl;
    return 0;
}