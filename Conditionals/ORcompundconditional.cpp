#include <iostream>
using namespace std;

int main()
{

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks >= 900 || marks == 1100)
    {
        cout << "You are eligible.";
    }
    else
    {
        cout << "You are not eligible.";
    }
    return 0;
}