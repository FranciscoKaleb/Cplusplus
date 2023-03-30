#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, world! goodbye";
    std::string sub_str = "goodbye";

    // Find the position of "goodbye" in the string
    size_t pos = str.find(sub_str);

    // Check if "goodbye" was found
    if (pos == std::string::npos)
    {
        std::cout << "\"" << sub_str << "\" was not found in the string." << std::endl;
    }
    else
    {
        std::cout << "The position of \"" << sub_str << "\" in the string is " << pos << std::endl;
    }

    return 0;
}