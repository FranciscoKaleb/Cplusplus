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
    void Print_delay(char words)
    {
            cout << words;
            this_thread::sleep_for(chrono::milliseconds(10));
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
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ,."};
        string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba()%"};
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
    void Challenge_2()
    {
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ,."};
        string key[] 
        {
            "q26ze","r2y5b","3x24y","423w4","32v15","6hu20","7719t","01s8i","11r17","4b16q",
            "1s9p5","h5o14","1k6nl","1kkm2","33l11","16m0k","0j1z9","i0z48","0z97h","7i0g6",
            "f0775","04r4e","0cfd3","c0cc2","04g1b","0670a","72Z!f","442Yd","3611X","021Ww",
            "1111V","5vio)","6iTzz","223kz","1241r","QQQ9i","Oz09w","Pdi8a","ai839","n6yds",
            "m00fe","kold3","lov3T","JaK3l","H!tmR","Irle8","Az5tu","H1c90","Bl6ii","Go0fg",
            "C69zp","Fa4gi","D7mmi","Elk00","Zo0rD","L4mbB","K00ii","Cl8dm"
        };
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
                   for(int k = 0; k < 5; k++)
                   {
                       encrypted_string.push_back(key[j][k]);
                   }
                   
                   break; // used to stop iterating after the matched letter is found
                }
            } 
        }
        cout << input << " is encrypted to " << encrypted_string << endl;
        
        /*for()
        {
            
        }
        cout << input << " is decrypted to " << decrypted_string << endl;*/
    }
    void Challenge_3() //pyramiding
    {
        string input {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

        
        
        //getline(cin, input);
        for(int i = 0; i < input.length(); i++) 
        {
            
            for(int j = 0; j <= i; j++) 
            {
                
                    Print_delay(input[j]);  
                   
            }
            
            cout << endl;
            
        }
        
        for(int i = 0; i < input.length(); i++) 
        {
            
            for(int j = 0; j <= i; j++) 
            {
                
                Print_delay(input[j]); 
                
                if(j == i)
                {
                    
                    for(int k = j; k >= 0; k--)
                    {
                        
                        if(k == 0)
                        {
                            break;
                        }
                        Print_delay(input[k-1]); 
                        
                    }
                    
                }
                
            }
            
            cout << endl;
        }
        
        int empty_space = input.length()-1;
        
        for(int i = 0; i < input.length(); i++) 
        {
            
            for(int l = 0; l <= empty_space; l++)
                {
                    
                   cout << " "; 
                   
                }
                
                empty_space = empty_space - 1;   
                
            for(int j = 0; j <= i; j++) 
            {
                
                Print_delay(input[j]); 
                
                if(j == i)
                {
                    
                    for(int k = j; k >= 0; k--)
                    {
                        
                        if(k == 0)
                        {
                            break;
                        }
                        Print_delay(input[k-1]); 
                    }
                    
                }
                
            }
            
            cout << endl;
        }
        
        
    for (int i = 0; i < input.length(); ++i) //GPT version
        {
            std::cout << std::string(input.length() - i - 1, ' ');
            std::cout << input.substr(0, i + 1);
            std::cout << input.substr(0, i);
            std::cout << '\n';
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
    obj.Challenge_3();
    
    
}