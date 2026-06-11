#include<iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter the nummber : ";
    cin >> num;

    if (num == 1)
    {
        cout << "it's January.";
    }
    else if (num == 2)
    {
        cout << "it's February.";
    }
    else if (num == 3)
    {
        cout << "it's March.";
    }
    else if (num == 4)
    {
        cout << "it's April.";
    }
    else if (num == 5)
    {
        cout << "it's May.";
    }
    else if (num == 6)
    {
        cout << "it's June.";
    }
    else if(num == 7)
    {
        cout << "it's July.";
    }
    else if(num == 8)
    {
        cout << "it's August.";
    }
    else if(num == 9)
    {
        cout << "it's September.";
    }
    else if(num == 10)
    {
        cout << "it's October.";
    }
    else if(num == 11)
    {
        cout << "it's November.";
    }
   else if(num == 12)
    {
        cout << "it's December.";
    }
    else{
        cout << " invalid number. ";
    }
   return 0;
}