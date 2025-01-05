
// iostream is a header file and include works like import in Python
// iostream helps in input output function ex. cout
#include <iostream>

// cout function is present in standard namespace of iostream
// hence we define the namespace std here, so that we dont need to call cout using std.cout
using namespace std;

// int here means integer
// main is a function, main is the entrypoint of the c++ program which can have multiple functions within it
int main() {
    cout << "!!! Hello World !!!" << endl;
    return 0;
}