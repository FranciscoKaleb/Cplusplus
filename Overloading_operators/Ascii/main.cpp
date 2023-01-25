//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
#include <string.h>


int main()
{
    vector<string> GroupOfWords {"Vanguard", "Elon Musk", 
                        "ZUCKERBERG", "ELIZABETH", "Pope Francis", "EUGENIE",
                        "Charles", "ROTHSCHILD", "Rothschild", "ELONMUSK", 
                        "WILLIAM", "BLACK ROCK", "BLACKROCK","Hadron", "France",
                        "Vatican","Europe","Assistant", "ASSISTANT", "Reason", "ChatGPT",
                        "openAI","EPISCOPAL","Holy See","CATHOLIC", "NEWWORLD", "Geneva",
                        "ECCLESIA","CATHOLICA"};
    int sum {0};
    
    for(string word: GroupOfWords)
    {
        for(char letter : word)
        {
            //cout << int(letter) << " ";
            sum = sum + int(letter);
        }
        cout << word << " has a sum of " << sum << endl;
        sum = 0;
    }
}



