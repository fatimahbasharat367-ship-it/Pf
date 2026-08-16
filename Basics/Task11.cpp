#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Teen numbers likho: ";
    cin >> x >> y >> z;

    if(x >= y && x >= z) cout << "Largest = " << x;
    else if(y >= x && y >= z) cout << "Largest = " << y;
    else cout << "Largest = " << z;
    return 0;
}
