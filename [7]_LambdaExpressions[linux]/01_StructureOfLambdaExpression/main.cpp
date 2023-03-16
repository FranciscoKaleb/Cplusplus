#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Multiplier
{
private:
    int num {};
public:
    Multiplier(int n)
    :num {n}
    {}

    int operator()(int n) const
    {
        return num* n;
    }
};

template <typename T>
struct Displayer
{
    void operator()(const T &data)
    {
        cout << data << " ";
    }
};


void test_1();
void test_2();
void test_3();
void test_4();


int main()
{
    // c++ 11
    // stateless lambda
    // stateful lambda

    //test_1();
    //test_2();
    //test_3();
    //test_4();
    test_5();
    return 0;
}

void test_1()
{
    vector<int> vec {1,2,3,4,5};
    Multiplier mult{10};

    transform(vec.begin(), vec.end(), vec.begin(), [](int x) {return x*6;}); // or mult in place of lambda

    for(const auto &mem:vec)
    {
        cout << mem << " " << endl;
    }
}

void test_2()
{
    Displayer<int> d1;
    Displayer<string> d2;

    d1(100);
    d2("Frank");
}

void test_3()
{
    Displayer<int> d1;
    Displayer<string> d2;
    vector<int> vec1 {1,2,3,4,5};
    vector<string> vec2 {"Larry", "Moe", "Curly"};

    for_each(vec1.begin(), vec1.end(), Displayer<int>());
    cout << endl;
    for_each(vec1.begin(), vec1.end(), d1);
    cout << endl;
    for_each(vec2.begin(), vec2.end(), d2);
    cout << endl;
    for_each(vec1.begin(), vec1.end(), [](int x) {cout << x << " ";});
    cout << endl;
    for_each(vec2.begin(), vec2.end(), [](string s) {cout << s << " ";});
    cout << endl;
}

void test_4()
{
    auto l = [] (int x, int y) {return x*y;};
    auto l2 = [] (int x) {cout << x << endl;};

    auto m = [] (string s) {return s;};
    auto n = [] () {std::cout << "Hi!!!" << endl;};

    cout << l(2,2) << endl;
    l2(100);

    cout << m("Hi") << endl;
    n();
}
