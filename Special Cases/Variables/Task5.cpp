#include <iostream>
using namespace std;

int main() {
    int num ;
    cout << "Enter a Number : ";
    cin >> num;
    bool isEven = (num % 2 == 0);
    cout << "The Number is " << isEven <<  endl;
    cout << "If 0 then odd , If 1 then even. " ;
    return 0;
}
