#include <iostream>
using namespace std;

// global variable
int glo = 6;

void sum(){
    // local variable
    int a;

    // Here the value of glo remains global as no local variable named glo is defined
    // hence the value here will be 6
    cout<<glo;
}

int main(){
    int x = 4;
    int y = 5;

    int a = 15, b = 14;

    float pi = 3.5;
    char c = 'd';

    // if value is true it prints 1 and 0 for false
    bool is_true = true;

    // local variable precedence 
    /* 
    Local Variable Precedence refers to the priority given to variables declared within a function or block 
    over variables with the same name declared in an outer scope (such as global or class member variables).
    */
    int glo = 9;

    sum();

    cout<<"This is about Variable Scope and Data Type. \nHere the value of a is "<<a<<". \nThe value of b is "<<b;
    cout<<"\nThe value of pi is: "<<pi;
    cout<<"\nThe value of c is: " <<c;
    cout<<"\n The value of glo is: "<<glo;
    cout<<"\n The value of is_true is: "<<is_true;
    return 0;
}