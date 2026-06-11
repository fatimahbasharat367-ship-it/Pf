#include<iostream>
#include<conio.h>
using namespace std;


int main() {
    while(true){

    cout << "      ----> Menu <----      " << endl;
    cout << "1) Enter 1 for Addition\n" << "2) Enter 2 for Subtraction\n" << "3) Enter 3 for Multiplication\n" << "4) Enter 4 for Division\n";

    int Option;
    cout << "Choose an Option from 1 to 4 : ";
    cin >> Option;
     system("cls");
    
    int c;
    int a;
    cout << "Enter the 1st Number : ";
    cin >> a;

    int b;
    cout << "Enter the 2nd number : ";
    cin >> b;

    switch(Option){
        case 1 : c = a + b ; break;
        case 2 : c = a - b ; break;
        case 3 : c = a * b ; break;
        case 4 : c = a / b ; break;
}
 cout << "Result is : " << c << endl;
 getch();
    } 
   return 0;
}