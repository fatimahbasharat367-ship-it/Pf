#include <iostream>
using namespace std;

int square(int n) {
    return n * n; 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = square(num);

    cout << "Square of " << num << " is: " << result << endl;

    return 0;
}
