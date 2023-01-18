#include "Movie.h"

Movie::Movie()
{
    
}

Movie::Movie(string name, string description, vector<string> movieRating)
:Movie(name, description, movieRating, _DEFAULT_WATCH_COUNT, _DEFAULT_SATISFACTORY_RATING)
{
    this->name = name;
    this->description = description;
    this->movieRating = movieRating;
}

Movie::Movie(string name, string description, vector<string> movieRating, int watchCount, int satisfactoryRating)

{
    this->name = name;
    this->description = description;
    this->movieRating = movieRating;
    this->watchCount = watchCount;
    this->satisfactionRating = satisfactoryRating;
}

Movie::~Movie()
{
}



