#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout << " Enter the number till which you want the sum : ";
    cin >> n;

    int sum;
    sum = n*( n + 1 )/2;
    cout << " The sum of till nth number is : " << sum;
   return 0;
}