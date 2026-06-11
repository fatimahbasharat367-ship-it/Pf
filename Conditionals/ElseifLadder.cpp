#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the nummber : ";
    cin >> num;

    if (num == 1)
    {
        cout << "it's Monday.";
    }
    else if (num == 2)
    {
        cout << "it's Tuesday.";
    }
    else if (num == 3)
    {
        cout << "it's Wednesday.";
    }
    else if (num == 4)
    {
        cout << "it's Thursday.";
    }
    else if (num == 5)
    {
        cout << "it's Friday.";
    }
    else if (num == 6)
    {
        cout << "it's Saturday.";
    }
    else
    {
        cout << "it's Sunday.";
    }
    return 0;
}