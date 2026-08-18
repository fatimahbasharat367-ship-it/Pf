#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
        cout << "Letter\n";
    else if (isdigit(ch))
        cout << "Number\n";
    else
        cout << "Special Character\n";

    return 0;
}
