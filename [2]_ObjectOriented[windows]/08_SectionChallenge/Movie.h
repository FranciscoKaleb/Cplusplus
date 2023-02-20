#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Movie
{
public:
friend class Movies;
private:
    //defaults
    const vector<string> ratingList {"General", "Mature", "Parental Guidance", "Restricted", "X"};
    const int _DEFAULT_SATISFACTORY_RATING {5};
    const int _DEFAULT_WATCH_COUNT {0};
    const string _DEFAULT_NAME {" "};
    const string _DEFAULT_DESC {" "};
    
    //private members
    int id {0};
    string name {_DEFAULT_NAME};
    string description {_DEFAULT_DESC};
    vector<string> movieRating {}; //default is blank
    
    int watchCount { _DEFAULT_WATCH_COUNT};
    int satisfactionRating {_DEFAULT_SATISFACTORY_RATING}; // 1-5
    
public:
    Movie();
    Movie(string name, string description, vector<string> movieRating);
    Movie(string name, string description, vector<string> movieRating, int watchCount, int satisfactoryRating);
    ~Movie();
    void set_name(string &n)
    {
        this->name = n;
        cout << "name set to " << n << endl;
    }
    void set_desc(string &d)
    {
        this->description = d;
        cout << "description set to " << d << endl;
    }
    void set_rating(vector<string> &vec)
    {
        this->movieRating = vec;
        cout << "Movie's Rating is set to: ";
        for(auto mem : vec)
        {
            cout << mem <<", ";
        }
        cout << endl;
    }
    void list_rating()
    {
        for(size_t i = 0; i < ratingList.size(); i++)
        {
            cout << "[" << i << "] " << ratingList.at(i) << endl;
        }
    }
    
};

#endif // MOVIE_H
