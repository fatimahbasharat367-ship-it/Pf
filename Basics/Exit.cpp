#include <iostream>
#include <cstdlib>   
using namespace std;

int main() {
    int password;
    cout << "Enter password: ";
    cin >> password;

    if (password != 1234) {
        cout << "Access Denied!";
        exit(0);   
    }

    cout << "Welcome to the system!";
    return 0;
}
