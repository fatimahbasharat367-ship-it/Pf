#include<iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int product = 0;
     
    product = x++ * y;

    cout << "The Product of the variables is : " << product;
   return 0;
}