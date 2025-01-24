#include <iostream>
using namespace std;

int main(){
    /* 
    flush is faster than endl
    flush doesnot create a new line at the end

    What is a buffer?
    A buffer is a temporary storage area in memory where data is held before being processed or transferred to its 
    final destination (e.g., screen, file, or network).

    When you use std::cout to print something, the output is not immediately displayed on the screen. Instead, the data 
    is stored in a buffer (a chunk of memory managed by the system)

    flush forces the buffer to be written immediately, ensuring that the output appears without delay.

    */
    cout << "Starting Program .... " << flush;  // Displayed immediately 

    cout << "\n This is some text." << endl; // Stored in the buffer, not printed immediately

    cout <<"Banana." << "Apple." << "Orange." << endl; // This prints with no space between fruits

    cout << "This is some more text." << endl;
    return 0;
}