#include<iostream>
using namespace std;

void sum(int num1, int num2);
void multi(int number1, int number2);

int main() {
   int num1, num2;
   cout << " Enter Digit Number 1 : " ;
   cin >> num1;
   cout << " Enter Digit Nunber 2 : " ;
   cin >> num2; 
   sum(num1, num2);
 
   num1, num2;
   cout << " Enter Digit Number 1 : "  ;
   cin >> num1;
   cout << " Enter Digit Number 2 : "  ;
   cin >> num2; 
   multi(num1, num2);
}

   void sum(int num1, int num2){
    int sum;
    sum = num1 + num2 ;
    cout << " The Sum of Two NUmbers is : " << sum << endl ;
   }

   void multi(int num1, int num2){
    int multi;
     multi = num1 * num2 ;
    cout << " The Multiple of Two NUmbers is : " << multi;
   }