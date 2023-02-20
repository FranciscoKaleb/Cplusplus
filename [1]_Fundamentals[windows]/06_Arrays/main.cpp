//

#include <iostream>
#include <climits>
#include <array>

using namespace std;

int main(){
    //setting values for an array
    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;
    
    //redefining value/s of an array
    double high_temp[] {90.1, 88.6, 88.2, 87.3};
    cout << "The first high temp is " << high_temp[0] << endl;
    high_temp[0] = 100.4;
    cout << "The second high temp is " << high_temp[0] << endl;
    
    //============================
    int test_scores[5] {0};
    
    cout << "The first test score is " << test_scores[0] << endl;
    cout << "The second test score is " << test_scores[1] << endl;
    cout << "The third test score is " << test_scores[2] << endl;
    cout << "The fourth test score is " << test_scores[3] << endl;
    cout << "The fifth test score is " << test_scores[4] << endl;
    
    cout << "Enter the 5 test scores " << endl;
    int length = sizeof(test_scores)/sizeof(int);
    
    //looping through an array
    for(int x = 0; x < length ; x++)
    {
        cout << "Enter the score"<<endl;
        cin >> test_scores[x];
    }
    cout << "The first test score is " << test_scores[0] << endl;
    cout << "The second test score is " << test_scores[1] << endl;
    cout << "The third test score is " << test_scores[2] << endl;
    cout << "The fourth test score is " << test_scores[3] << endl;
    cout << "The fifth test score is " << test_scores[4] << endl;
    
    
}