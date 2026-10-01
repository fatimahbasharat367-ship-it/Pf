#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    int maximum = findMax(x, y, z);
    cout << "The largest number is: " << maximum << endl;
    return 0;
}
