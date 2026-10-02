#include <iostream>
using namespace std;

void printNumbers(int n) {
    int i = 1;
    while (i <= n) {
        cout << i++ << " "; 
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printNumbers(num);

    return 0;
}
