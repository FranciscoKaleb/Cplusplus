#include <iostream>
#include <vector>
#include <functional>

using namespace std;

void test_1();
void test_2();
void test_3();
void test_4();
void test_5();


int main()
{
    test_5();
    return 0;
}

void test_1()
{
    [] () {cout << "Hi" << endl;}();

    int x{100};
    [] (int x) {cout << x << endl;} (100);
}

void test_2()
{
    int score1 {78};
    int score2 {87};

    cout << "Before bonus" << endl;
    cout << "Score 1: " << score1 << endl;
    cout << "Score 2: " << score2 << endl;

    auto bonus = [] (int &score1, int &score2, int bonus)
    {
        score1 += bonus;
        score2 += bonus;
    };

    bonus(score1, score2, 3);

    cout << endl;
    cout << "After bonus" << endl;
    cout << "Score 1: " << score1 << endl;
    cout << "Score 2: " << score2 << endl;
}

void test_3()
{
    int score1 {78};
    int score2 {89};

    cout << "Before bonus" << endl;
    cout << "Score 1: " << score1 << endl;
    cout << "Score 2: " << score2 << endl;

    auto bonus = [] (int *score1, int *score2, int bonus)
    {
        *score1 += bonus;
        *score2 += bonus;
    };

    bonus(&score1, &score2, 3);

    cout << endl;
    cout << "After bonus" << endl;
    cout << "Score 1: " << score1 << endl;
    cout << "Score 2: " << score2 << endl;
}

void test_4()
{
    vector<int> test_scores {82,84,80,93,90};

    auto bonus = [] (vector<int> &test_scores, int bonus)
    {
      for(auto &score:test_scores)
      {
          score += bonus;
      }
    };

    bonus(test_scores, 2);

    for(const auto &score:test_scores)
    {
        cout << score << " ";
    }
    cout << endl;
}

void test_5()
{
    vector<int> test_scores1 {78, 80, 77, 91, 85};
    vector<float> test_scores2 {88.5, 85.3, 88.1, 90.7, 77.3};

    auto add_bonus = [] (vector<auto> &test_scores, int bonus)
    {
        for(auto &score:test_scores)
        {
            score += bonus;
        }
    };

    add_bonus(test_scores2, 3);

    for(const auto &score:test_scores2)
    {
        cout << score << " ";
    }
    cout << endl;
}


