#include <iostream>
using namespace std;

int main(){

    cout << "Enter your name: " << flush;

    // Declare a variable to hold the input entered by user
    string input;

    // get the input entered by user
    cin >> input;

    // print the number entered by user
    cout << "You Entered: " << input << endl;

    cout << "Enter a number: " << flush;
    int value;
    cin >> value;
    cout << "You Entered: " << value << endl;

    return 0;
}