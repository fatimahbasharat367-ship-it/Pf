#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int oddSum = 0;
    int i = 1;

    while (i <= 5)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
            i++;
        }
    }
    cout << "Your total odd sum of numbers is " << oddSum;
    return 0;
}