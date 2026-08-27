#include <iostream>
#include <string>
using namespace std;

int main() {
    string first;
    cout << " Enter the first word : ";
    cin >> first;

    string second = "World";
    cout << " Enter the second word : ";
    cin >> second;

    string result = first + " " + second; 
    cout << "Result: " << result << endl;
    return 0;
}
