#include <iostream>
using namespace std;

int main()
{
    float temp;
    cout << " Enter the temperature of the body : ";
    cin >> temp;

    float heart_Rate;
    cout << " Enter the heart Rate of the body : ";
    cin >> heart_Rate;

    if (temp >= 39 && heart_Rate >= 120)
    {
        cout << " The Patient is critical. ";
    }
    else if (temp >= 39 || heart_Rate >= 120)
    {
        cout << " The Patient needs Attention. ";
    }
    else
    {
        cout << " The person is Stable. ";
    }
    return 0;
}