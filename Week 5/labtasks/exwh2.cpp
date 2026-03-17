#include <iostream>
using namespace std;
main()
{
    int value;
    cout << "Please enter Positive Number: ";
    cin >> value;
    while (value <= 0)
    {                                                                          
        cout << "Error: " << value << " is not Positive Number." << endl;
        cout << "Please enter Positive Number: ";
        cin >> value;
    }
    cout << "Program Ends" << endl;
}