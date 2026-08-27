#include <iostream>
#include <string>
using namespace std;

int main() {
    string a ;
    cout << " Enter the first word : " ;
    cin >> a;

    string b ;
    cout << " Enter the second word : " ;
    cin >> b;

    if (a < b) {
        cout << a << " comes before " << b << endl;
    } else {
        cout << b << " comes before " << a << endl;
    }
    return 0;
}
