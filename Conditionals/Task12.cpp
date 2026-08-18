#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter side number 1 : ";
    cin >> a;
    cout << "Enter side number 2 : ";
    cin >> b;
    cout << "Enter side number 3 : ";
    cin >> c;

    if (a == b && b == c)
        cout << "Equilateral Triangle\n";
    else if (a == b || b == c || a == c)
        cout << "Isosceles Triangle\n";
    else
        cout << "Scalene Triangle\n";

    return 0;
}
