//

#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main(){
    //creating an string vector
    vector<string> item_slot {"boots","shovel","scroll"};
    
    //accessing vector index
    cout << item_slot.at(0) << endl;
    cout << item_slot.at(1) << endl;
    cout << item_slot.at(2) << endl << endl;
    
    //adding another index to the vector
    item_slot.push_back("helm");
    
    cout << item_slot.at(0) << endl;
    cout << item_slot.at(1) << endl;
    cout << item_slot.at(2) << endl;
    cout << item_slot.at(3) << endl << endl;
    
    //getting index size of vector
    cout << "Vector index size is " << item_slot.size() << endl << endl;
    
    //looping through the vector
    for(int x = 0; x < item_slot.size() ; x++)
    {
        cout << item_slot.at(x) << endl;
    }
    cout << endl;
    
    //populating a vector using an array through for loop
    string names[4] {"cook","aim","salute"};
    vector<string> vector_names {};
        //push names from array to vector using for loop
    for (int x = 0;x < sizeof(names)/sizeof(string); x++)
    {
        vector_names.push_back(names[x]);
    }
        //display the result
    for (int x = 0;x < sizeof(names)/sizeof(string); x++)
    {
        cout << vector_names.at(x) << endl;
    }
    cout << endl;
    
    //using multi dimensional array
    string employees[3][4] 
    {
        {"Gum1","Gum2","Gum3","Gum4"},
        {"cain","hunger","cool","stuff"},
        {"bro", "eyy", "great" , "mama"}
    };
    cout << employees[0][1] << endl;
    
    //using two dimentional vector

    vector<vector<int>> movie_ratings
    {
        {1,2,3,4}
    };
    
    movie_ratings.at(0).push_back(5);
    movie_ratings.push_back({7,8,9});
    
    cout << movie_ratings.at(0).at(4) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    
    
}