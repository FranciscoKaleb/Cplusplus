//

#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <string>

using namespace std;

class Examples
{
public:
    void Print_delay(string words)
    {
        size_t i {0};
        while(i < words.length())
        {
            cout << words[i];
            this_thread::sleep_for(chrono::milliseconds(50));
            i++;
        }
    }
    void Example_1() //initialization
    {
        string s0;
        string s1 {"Apple"};
        string s2 {"Banana"};
        string s3 {"Kiwi"};
        string s4 {"apple"};
        string s5 {s1};
        string s6 {s1, 0, 3};
        string s7 (10, 'X');
        
        cout << "initialization" << endl;
        cout << "s1 is initialized to " << s1 << endl;
        cout << "s2 is initialized to " << s2 << endl;
        cout << "s3 is initialized to " << s3 << endl;
        cout << "s4 is initialized to " << s4 << endl;
        cout << "s5 is initialized to " << s5 << endl;
        cout << "s6 is initialized to " << s6 << endl;
        cout << "s7 is initialized to " << s7 << endl;
        
    }
    string paragraph 
        {
            "Hi I am Dog. I live in Southern California doing odd jobs, \n"
            "like buying tomatoes for my uncle and sniffing bags of customers. \n"
            "I may be a Dog but don't underestimate me or I will bite your ass.\n\n"
        };
    void Example_2() // changing a word in a string
    {
        //change the word dog
        
        int start_index {0};
        int next_index {0};
        bool result {true};
        
        cout << paragraph;
        
        while(result)
        {
            start_index = paragraph.find("Dog", next_index);
            cout << "start index: " << start_index << endl;
            if(start_index == -1)
            {
                result = false;
            } 
            else
            {
                paragraph.erase(start_index, 3);
                paragraph.insert(start_index, "lizard", 6);
                next_index = start_index;
            }
            
        }
        
        cout << paragraph;
        
        
   
    }
    void Example_3() // knowing how many times a word has appeared in string
    {
        int start_index {0};
        int next_index {0};
        int count {0};
        string word {"Dog"};
        bool result {true};
        
        
        while(result)
        {
            start_index = paragraph.find(word, next_index);

            if(start_index == -1)
            {
                result = false;
            } 
            else
            {
                next_index = start_index + word.length();
                count++;
            }
            
        }
        
        cout << "the word " << word << " appeared " << count << " times" << endl;
    }
    void Example_4() // limiting number of string input
    {
        string input {"dog"};
        bool isfifty {false};
        int count {0};
        
        while(isfifty == false)
        {
            if(count == 0) 
            {
                cout << "Enter your a statement max of 50 words " << endl;
                getline(cin, input);
                count++;
            }
            if(input.length() < 50)
            {
                isfifty = true;
                cout << input << endl << "That is less than 50" << endl;
            }
            else 
            {
                cout << "Enter your a statement max of 50 words " << endl;
                getline(cin, input);
            }
        }
        
    }
    void Example_5() // subsstring
    {
        string sentence {"The Dog is very big"};
        string sentence2 {};
        
        sentence2 = sentence.substr(0, 7);
        cout << sentence2 << endl;
        
    }
    void Challenge() // Encryption and decryption my solution
    {
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
        string input {""};
        string encrypted_string {""};
        string decrypted_string {""};
        
        cout << "Enter a string " << endl;
        getline(cin, input);
        //encrypted_string = input;

        
        for(size_t i = 0 ; i < input.length(); i++)
        {
            for(size_t j = 0; j < alphabet.length(); j++)
            {
                if(input[i] == alphabet[j])
                {
                   //encrypted_string[i] = key[j];
                   encrypted_string.push_back(key[j]);
                   break; // used to stop iterating after the matched letter is found
                }
            } 
        }
        
        cout << input << " is encrypted to " << encrypted_string << endl;
        
        decrypted_string = encrypted_string;
        
        for(size_t i = 0; i < encrypted_string.length(); i++)
        {
            for(size_t j = 0; j < key.length(); j++)
            {
                if(encrypted_string[i] == key[j])
                {
                    decrypted_string[i] = alphabet[j];
                }
                    
            }
        }
        
        cout << "decrypted back to " << decrypted_string << endl;
        
    }
    void Challenge2() // instructors solution
    {
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
        string input {""};
        string encrypted_string {""};
        string decrypted_string {""};
        
        cout << "Enter your input to be encrypted" << endl;
        
        for(char c: input)
        {
            size_t position = alphabet.find(c);
            
        }
    }

};

int main()
{
    //find(string, start index) 
    //erase(start, length)
    //length()
    //substr(start_index, length) makes a substring
    //replace(s_index, string_length, string)
    //insert(s_index, string, s_length) or (s_index, string)
    
    //clear() clears string
    //empty() test if string is empty
    
    //back() access last character
    //front() access first chartacter
    //at()
    Examples obj;
    obj.Challenge();
    
    
}