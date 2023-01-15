//
using namespace std;
#include <iostream>
#include <climits>
#include <thread>
#include <vector>
#include <cmath>
int *apply_all(int arr1[], int arr2[], size_t size1, size_t size2);
void print(int *ptr, size_t size);

int main()
{
    int arr1[] {1,2,3,4,5};
    int arr2[] {6,7,8,9,10};
    int *pointer {nullptr};
    
    pointer = apply_all(arr1, arr2, 5, 5);
    print(pointer, 10);
    
    
}

int *apply_all(int arr1[], int arr2[], size_t size1, size_t size2)
{
   int *pointer {nullptr};
   pointer = new int[size1*size2];
   
   for(size_t i = 0; i < size1; i++)
   {
       pointer[i] = arr1[i]*arr2[i];
   }
   
   return pointer;
}

void print(int *ptr, size_t size)
{
    for(int i = 0; i < size; i++ )
    {
        cout << ptr[i] << " ";
    }
}