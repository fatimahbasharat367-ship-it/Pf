#include<iostream>
using namespace std;

int main()
 {
    cout << "Enter the value of a : ";
    int a;
    cin >> a;

    cout << "Enter the value of b : ";
    int b;
    cin >> b;
    
    int c;
    cout << "Enter the value of c : ";
    cin >> c;

    int sum = 0;
    sum += a + b + c;

    cout << "The sum of the provided numbers is : " << sum ;
       
   return 0;
}