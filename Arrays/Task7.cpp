#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int max = arr[0];
    cout << " Enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << " The maximum number is : " << max;
}
