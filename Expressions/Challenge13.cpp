#include<iostream>
using namespace std;

int main() {
    int num1;

    cout << " Enter interger Number 1 : " ;
    cin >> num1;

    int num2;
    cout << " Enter Integer Numebr 2 : " ;
    cin >> num2 ;

    num1 = num1 + num2 ;

    cout << " Enter the Integer Number 3 : ";
    cin >> num2;

    num1 = num1 + num2;

    cout << " Enter the Integer Number 4 : ";
    cin >> num2;

    num1 = num1 + num2;
  
    cout << " Enter the Integer Number 5 : ";
    cin >> num2;

    num1 = num1 + num2 ;

    cout << " The Sum of All the Integers is : " << num1 ;

   return 0;
}