#include <iostream>
using namespace std;

int main()
{
    char going;
    cout << " Enter Y if you are going to school : ";
    cin >> going;

    if (going == 'Y')
    {
        cout << " Your friend is going to school.";
    }
    else
    {
        cout << " Your friend is not going to school.";
    }
    return 0;
}