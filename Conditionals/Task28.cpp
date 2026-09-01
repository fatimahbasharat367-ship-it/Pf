#include<iostream>
using namespace std;

int main() {
    int count=0;
    int num1, num2;
    cout << " Enter Digit Number 1 : ";
    cin >> num1;
count ++ ;

    cout << " Enter Digit Number 2 : ";
    cin >> num2;
    num1 = num1 + num2 ;
    count ++;

    cout << " Enter the Digit Number 3 : ";
    cin >> num2;
    num1 = num1 + num2;
    count ++;

    cout << " Enter the Digit Number 4 : ";
    cin >> num2;
    num1 = num1 + num2;
    count ++;

    cout << " Enter the Digit Number 5 : ";
    cin >> num2;
    num1 = num1 + num2;
    count ++;

    int average ;
    average = num1 / count ;

    cout << " The Average of The entered digits is : " << average ;
   return 0;
}