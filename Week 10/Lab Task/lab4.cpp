#include<iostream>
#include<cmath>
using namespace std;

int main() {
     float num1;
    cout << "Enter Number 1 : ";
    cin >> num1;
    float num2;
    cout << "Enter Number 2 : ";
    cin >> num2;
     
    cout << "Minimum number : " << min(num1, num2);
   return 0;
}