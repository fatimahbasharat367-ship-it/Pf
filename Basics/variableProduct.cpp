#include<iostream>
#include<math.h>
using namespace std;

int main() {
    cout << "Enter the value of a : ";
    int a;
    cin >> a;

    cout << "Enter the value of b : ";
    int b;
    cin >> b;
    
    int c;
    cout << "Enter the value of c : ";
    cin >> c;

    int prod = 1;
    prod = prod*a*b*c;

    cout << "The product of the provided numbers is : " << prod;
       
   return 0;
}