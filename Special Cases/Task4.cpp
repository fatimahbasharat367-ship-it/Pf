#include <iostream>
using namespace std;

int main() {
    int marks ;
    cout << "Enter the obtained marks : ";
    cin >> marks;
    
    string status = (marks >= 50) ? "Pass" : "Fail";

    cout << "Result: " << status << endl;
    return 0;
}
