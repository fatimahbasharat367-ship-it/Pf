#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    //  if-else condition
    if (number % 2 == 0) {
        cout << "Number is even." << endl;
    } else {
        cout << "Number is odd." << endl;
    }
}