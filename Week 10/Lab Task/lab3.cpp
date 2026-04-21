#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int num1;
    cout << "Enter Number 1 : ";
    cin >> num1;
    int num2;
    cout << "Enter Number 2 : ";
    cin >> num2;
     
    cout << "Greater number : " << max(num1, num2);

   return 0;
}