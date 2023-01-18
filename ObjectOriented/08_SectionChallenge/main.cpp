//
#include "Movies.h"
#include <iostream>

using namespace std;

int main()
{
    Movies access;
    char choice {};
    bool program_end {false};
    
    while(program_end == false)
    {
        cout << "choose an action" << endl;
        cout << "a. add a movie" << endl;
        cout << "c. delete a movie" << endl;
        cout << "d. show list all movie" << endl;
        cout << "Enter x to exit" << endl;
        cin >> choice;
        
        switch(choice)
        {
            case 'a':
                cout << "add movie" << endl;
                access.addNewMovie();
            break;
            case 'c':
                cout << "delete movie" << endl;
            break;
            case 'd':
                cout << "list all movie" << endl;
                access.displayMovies();
            break;
            default:
                program_end = true;
            break;
        }
    }
}
void continue_()
{
        
}


