#include<iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int product = 0;
     
    product = x++; //post increment;
    product = ++x * y; //pre increment;

    cout << "The Product of the variables is : " << product;
   return 0;
}