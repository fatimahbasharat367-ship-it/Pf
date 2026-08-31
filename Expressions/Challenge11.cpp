#include<iostream>
using namespace std;

int main() {
    int num, sum;

    cout << " Enter the 4 Digits Number : ";
    cin >> num;

    sum += num % 10;
    num /= 10;
    
     sum += num % 10;
    num /= 10;

     sum += num % 10;
    num /= 10;

     sum += num % 10;
    
     cout << " The sum of the individual digits is : " << sum;
   return 0;
}