#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <iostream>
using namespace std;

class Movies
{
private:
     

public:
    
    Movies();
    ~Movies();
    // collection of movie objects
    // main should only deal with movies
    
    //create movie obj
    //add movie name, rating, watch count
    vector<Movie> movieList{};
    vector<int>::iterator it;
    void addNewMovie()
    {
        //DECLARATION OF VARIABLES
        Movie new_obj;
        int mov_count {0};
        
        string name {}; // movie name
        string desc {}; // movie description
        
        bool add {true}; // movie rating
        vector<string> rating {};
        int choice {};
        char y_n {};
        
        int watchCount {0}; // movie watch count
        int satisfactoryRating {0}; // movie satisfactory rating
        
        //START
        mov_count = movieList.size();
        new_obj.id = mov_count + 1;
        cout << "ADDING NEW MOVIE" << endl;
        //-------------------------------------------------
        cout << "Enter the movie name: ";
        cin.ignore();
        getline(cin, name);
        new_obj.set_name(name);
        //-------------------------------------------------
        cout << endl;
        cout << "Enter the movie description: ";
        //cin.ignore();
        getline(cin, desc);
        new_obj.set_desc(desc);
        //-------------------------------------------------
        cout << endl;
        cout << "Add a genre to movie: " << endl;
        new_obj.list_rating();
        cout << "type the number of the chose genre" << endl;
        while(add)
        {
           cout << "type the number of the chose genre" << endl;
           cin >> choice;
           rating.push_back(new_obj.ratingList[choice]);
           cout << "want to choose another rating? y/n" << endl;
           cin >> y_n;
           if(y_n == 'n')
           {
               add = false;
           }
        }
        new_obj.movieRating = rating;
        add = true;
        
        cout << "Enter the movie watch count" << endl;
        cin >> watchCount;
        new_obj.watchCount = watchCount;
        
        cout << "Enter the movie satisfactory rating" << endl;
        cin >> satisfactoryRating;
        new_obj.satisfactionRating = satisfactoryRating;
        
        movieList.push_back(new_obj);
        // ask movie name,rating .. . . .
        // push it to movie<vector>
        //list movie
    }

    
    //edit
    void editMovie();
    
    //delete
    void deleteMovie()
    {
        Movie *ptr {nullptr};
        int id {};
        cout << "Type the id of the movie you want to delete " << endl;
        cin >> id;
        if(id > movieList.size())
        {
            cout << "does not exist" <<  endl;
        }
        else
        {
            for(auto mem : movieList)
            {
                if (mem.id == id)
                {
                    // does nothing
                }
            }
        }
    }
    
    // display all the movies
    void displayMovies()
    {
        int count {1};
        for(auto mem: movieList)
        {
            
            cout << endl << "[" << mem.id << "]" << endl;
            cout << "Movie title: " << mem.name << endl;
            cout << "Description: " << mem.description << endl;
            cout << "Ratings: ";
            for(auto mem2: mem.movieRating)
            {
                cout << mem2 << " ";
            }
            cout << endl;
            cout << "Watch count: " << mem.watchCount << endl;
            cout << "Satisfactory Rating: " << mem.satisfactionRating << endl;
            cout << endl;
            count ++;
        }
        cout << endl;
    }
    
    
};

#endif // MOVIES_H
