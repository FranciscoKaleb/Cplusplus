//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
void Example_1();
void Example_2();
void Example_3();
void Example_4();
void Example_5();
void Example_6();
void Example_7();
void Example_8();
void Example_9();
void Example_10();
void Example_11();
void Example_12();
void Example_13();
int double_value(int* ptr);
void print_vector(const vector<string> *const vec);
void Example_14();
int* largest_int(int *int_ptr1, int *int_ptr2);
void Example_15();
int *create_array(size_t &size, int &init_value);
void print_array(size_t &size, int *array);
void Example_16();


int main()
{
    Example_9();
}

void Example_1() // knowing the size of pointer and value of pointer
{
   int num {10};
   cout << "The value of num is " << num << endl;
   cout << "The sizeof of num is " << sizeof(num) <<  " bytes" << endl;
   cout << "The address of num is " << &num << endl << endl;

   int *p = {};
   cout << "The value of *p is " << p << endl;
   //cout << "The value where p points to is " << *p << endl;  // would cause error
   cout << "The sizeof of p is " << sizeof(p) << " bytes" << endl;
   cout << "The address of p is " << &p << endl << endl;

   p = &num;
   cout << "The value where p is pointing to is " << *p << endl;
   //cout << "The value where p points to is " << *p << endl;  // would cause error
   cout << "The sizeof of p is " << sizeof(p) << " bytes" << endl;
   cout << "The address of p is " << &p << endl;
   cout << "The address where p is pointing to is " << p << endl << endl;
   cout << "Notice that the two address is different and the sizeof p is not affected of the size where its pointing to " << endl << endl;

   p = nullptr;
   cout << "The value of num is " << p << endl;
}
void Example_2() // no matter what data type the pointer is, it will have the same memory space requirement
{
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "The sizeof of p1 is " << sizeof(p1) << endl;
    cout << "The sizeof of p2 is " << sizeof(p2) << endl;
    cout << "The sizeof of p3 is " << sizeof(p3) << endl;
    cout << "The sizeof of p4 is " << sizeof(p4) << endl;
    cout << "The sizeof of p5 is " << sizeof(p5) << endl;
}
void Example_3()
{
   int score {10};
   //double high_temp {100.7};

   int *score_ptr {nullptr};

   score_ptr = &score;

   cout << "The address of score is " << &score << endl;
   cout << "The value of score is " << score << endl;
   cout << "The value of score_ptr is " << score_ptr << endl;
   cout << "The address of score_ptr is " << &score_ptr << endl;


   //score_ptr = &high_temp; causes error int > double
}
void Example_4()// dereferencing a pointer, changing the value of the pointed address using the pointer
{
   int score {100};
   int *score_ptr {&score};

   cout << *score_ptr << endl; //outputs the value of the address it points to
   *score_ptr = 200; // changes the value of the address it points to
   cout << score;
}
void Example_5()//changing pointers target address, only works if pointer is not constant
{
   double high_temp {100.7};
   double low_temp {37.6};
   double* temp_ptr {&high_temp};

   cout << "high temp is " << high_temp << endl;
   cout << "low temp is " << low_temp << endl << endl;

   cout << "temp_ptr address is " << &temp_ptr << endl;
   cout << "temp_ptr is pointing to " << temp_ptr << endl; //prints the address where temp_ptr is pointing to
   cout << "The value of *temp_ptr is " << *temp_ptr << endl << endl; // prints the value stored in the address its pointing to

   temp_ptr = &low_temp;

   cout << "temp_ptr address is " << &temp_ptr << endl;
   cout << "temp_ptr is pointing to " << temp_ptr << endl; //prints the address where temp_ptr is pointing to
   cout << "The value of *temp_ptr is " << *temp_ptr << endl << endl; // prints the value stored in the address its pointing to

}
void Example_6()// using pointer to print vector of string
{
   vector<string> names {"Kaleb","Marquez","Francisco"};
   vector<string> *vec_ptr {nullptr};
   //cout << endl << *vec_ptr << endl << endl; error
   vec_ptr = &names;

   for(string name: *vec_ptr)
   {
       name = "cain";

   }
   for(string &name: *vec_ptr)
   {
       cout << name << endl;
   }
   for(size_t i = 0; i < (*vec_ptr).size(); i++)
   {
       cout << (*vec_ptr)[i] << endl;
   }


}
void Example_7()// dynamic memory allocation
{
   int* int_ptr {nullptr};
   //int a = 5;
   int_ptr = new int;  // points to a new integer address without a variable name. only way to access it is through a pointer

   cout << int_ptr << endl; // = new int address

   delete int_ptr; //deletes new int, frees the memory

   int_ptr = nullptr; // points to nothing instead of the new int address

   cout << int_ptr <<  endl; // = 0
}
void Example_8()
{
    size_t size{};
    int value_ini {};
    double *double_ptr {nullptr};

    cout << "How many doubles? " << endl;
    cin >> size;
    cout << "What value to initialize? " << endl;
    cin >> value_ini;

    //while(true) dont do
    double_ptr = new double[size];

    for(size_t i = 0; i < size ; i++)
    {
        double_ptr[i] = value_ini; //subscript notation
        value_ini += 4;
        cout << *(double_ptr + i) << " " << &double_ptr[i] << endl; // off set notation
    }

    cout << double_ptr << endl;

    delete [] double_ptr;

}
void Example_9()
 {
    int score[] {22, 23, 25};
    int *score_ptr {score};

    cout << score_ptr << endl;
    cout << score_ptr + 1 << endl;
    cout << score_ptr + 2<< endl;

    cout << score << endl;
    cout << score + 1 << endl;
    cout << score + 2<< endl;

    cout << *score_ptr << endl; // pointer off set notation
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2)<< endl;

    cout << score_ptr[0] << endl; // pointer subscript notation
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    //cout << (*score_ptr)[0] << endl; // do this if score_ptr = &score;;  &&&
    //cout << (*score_ptr)[1] << endl;
    //cout << (*score_ptr)[2] << endl;

    cout << *score << endl; // array off set notation
    cout << *(score + 1) << endl;
    cout << *(score + 2) << endl;

    cout << score[0] << endl; // array subscript notation
    cout << score[1] << endl;
    cout << score[2] << endl;


}
void Example_10()// while loop using score_ptr ++
{
    int scores[] {1100,55,334,21,-1};
    int *score_ptr {scores}; // notice that we do not use &scores coz its an array

    while(*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }


}
void Example_11()// pointer comparison
{
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string* ptr1 {&s1};
    string* ptr2 {&s2};
    string* ptr3 {&s1};

    cout << boolalpha << endl;
    cout << (*ptr1 == *ptr2) << endl; //true   compares value
    cout << (ptr1 == ptr2) << endl; //false    compares address of pointers
    cout << (*ptr1 == *ptr3) << endl;// true   compares address of where they point to


}
void Example_12()// constant pointers
{
    int high_score {100};
    int low_score {45};
    const int *score_ptr {&high_score}; //the address where pointer points to becomes a constant and cant be changed
    int *const score_ptr2 {&high_score}; //pointer is constant and cant point anywhere but value where it points can be changed
    const int *const score_ptr3 {&high_score};
    //*score_ptr = 99;ERROR
    //score_ptr = &low_score OKAY


    //score_ptr = &low_score; OKAY
    //*score_ptr = 40; ERROR


    //score_ptr2 = &low_score ERROR
    //*score_ptr2 = 40 OKAY
}
void Example_13()// passing ptr to parameters of function
{
    int num {9};
    int *int_ptr {&num};

    cout << *int_ptr << endl;

    double_value(int_ptr);

    cout << *int_ptr << endl;

    vector<string> animals {"Dog","cat","mouse"};
    vector<string> *vec_ptr {&animals};
    print_vector(vec_ptr);

}
int double_value(int *ptr) // accepts a pointer as parameter
{
    return *ptr = *ptr * 2; // returns an integer
}
void print_vector(const vector<string> *const vec)
{
    for(auto mem: *vec)
    {
        cout << mem << endl;
    }
}
void Example_14() // pointer as functions return type;
{
    int num1 {100};
    int num2 {200};
    int *point_to_larger {nullptr};

    point_to_larger = largest_int(&num1, &num2); //pass the address of the two integer

    cout << *point_to_larger << endl;
}
int *largest_int(int *int_ptr1, int *int_ptr2)
{
    if(*int_ptr1 > *int_ptr2)// compare the values within 100 and 200
    {
        return int_ptr1; //returns an address value of the address passed to pointer parameter int_ptr_1
    }
    else
    {
        return int_ptr2;
    }
}
void Example_15()
{
    size_t size {};
    int init_value {};
    int *my_array {nullptr};

    cout << "Type the size of the array" << endl;
    cin >> size;
    cout << "Type the value to initialize the indexes" << endl;
    cin >> init_value;
    my_array = create_array(size, init_value);

    print_array(size, my_array);

    delete [] my_array;

}
void print_array(size_t &size, int *array)
{
    for(int i = 0; i < size ; i++)
    {
        cout << array[i] << " ";
    }
}
int *create_array(size_t &size, int &init_value)
{
    int *new_storage {nullptr};
    new_storage = new int[size];

    for(int i = 0; i < size; i++)
    {
        new_storage[i] = init_value;
    }
    return new_storage;
}
void Example_16()
{

}