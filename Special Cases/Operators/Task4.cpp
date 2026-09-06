#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 2;

    cout << "a << 1 = " << (a << 1) << endl; 
    cout << "a >> 1 = " << (a >> 1) << endl; 

    cout << "a++ = " << a++ << " (after a = " << a << ")" << a << endl;
    cout << "b-- = " << b-- << " (after b = " << b << ")" << b << endl;


    return 0;
}
