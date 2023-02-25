#include <iostream>
#include <deque>
#include <algorithm>
#include <iomanip>
#include <cctype>

bool is_palindrome(const std::string &s);

int main()
{

    std::vector<std::string> vec
    {
        "KALEBELAK", "o", "QUE EU Q", "ALa", "lo"
    };
    for(const auto &mem:vec)
    {
        std::cout << std::setw(15) << std::left << mem << " " << is_palindrome(mem) << std::endl;
        //is_palindrome(mem);
    }
    return 0;
}

bool is_palindrome(const std::string &s)
{
    std::deque<char> dec;
    bool test {true};

    for(auto c: s)
    {
        if(isalpha(c))
        {
            dec.push_back(c);
        }
    }

    auto it = dec.rbegin();
    auto it2 = dec.begin();

    for(int i = 0; i < (dec.size()/2); i++)
    {
        if(*it != *it2)
        {
            test = false;
        }
        it++;
        it2++;
    }
    // instructors solution, more efficient
    /*deque<char> d;
     * char c1;
     * char c2;
     *
     * while(d.size() >1)
     * {
     *  c1 = d.front();
     *  c2 = d.back();
     *  d.pop_back();
     *  d.pop_front();
     *  if(c1 != c2)
     *      return false;
     *  }
     * return true;
     */

    return test;

}