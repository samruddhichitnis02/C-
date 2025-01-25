#include <iostream>
#include <limits>

using namespace std;

int main(){
    // int value = 56147483647;

    /*
    When I try to print the value, it gives me an error that warning: overflow in implicit constant conversion [-Woverflow]
    which means I am trying to fit a very big number into a very small memory
    */
    // cout << value << endl;

    // This will print the minimum integer value that a integer datatype can hold
    cout << "Minimum int value: " << numeric_limits<int>::min() << endl;

    // This will print the maximum integer value that a integer datatype can hold
    cout << "Maximum int value: " << numeric_limits<int>::max() << endl;


    // So if we want that the variable should be able to hold large integer values then we can use this as below:
    long long int val = 9147483647;
    cout << val << endl;

    // This line gives the size of integer in bytes
    cout << "Size of Short int : " << sizeof(short int) << endl; // short int size = 2

    // This line gives the size of integer in bytes
    cout << "Size of int : " << sizeof(int) << endl; // int size = 4

    // This line gives the size of integer in bytes
    cout << "Size of long int : " << sizeof(long int) << endl; // long int size = 4

    // This line gives the size of integer in bytes
    cout << "Size of long long int : " << sizeof(long long int) << endl; // long long int = 8

    long value_long = 38578758;
    cout << value_long << endl;

    // This line gives the size of long in bytes
    cout << "Size of long : " << sizeof(long) << endl; //long = 4

    return 0;
}