#include <iostream>
using namespace std;

int main() {
    double marks;
    cout << "Enter your Marks Out of 100 : ";
    cin >> marks;

    double total = 100;
    double percentage = (marks / total) * 100;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}
