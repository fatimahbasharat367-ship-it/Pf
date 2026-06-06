#include<iostream>
using namespace std;

int main() {
    float i, p, r, t;

    cout << "Enter the Principal : ";
    cin >> p;

    cout << "Enter the value of interest rate : ";
    cin >> r;

    cout << "Enter the value of time : ";
    cin >> t;

    i = p * r * t;
    cout << " The interest rate earned is :" << i;
    

   return 0;
}