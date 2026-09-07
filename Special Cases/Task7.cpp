#include <iostream>
using namespace std;

int main() {
    int num ;
    cout << "Enter a number you want to check : ";
    cin >> num;
    
    string type = (num % 2 == 0) ? "Even" : "Odd";

    cout << num << " is " << type << endl;
    return 0;
}
