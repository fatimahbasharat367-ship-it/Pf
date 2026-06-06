#include<iostream>
using namespace std;

typedef int marks;
int main() {
    marks m1, m2;
    //m1 = 2;
    //m2 = 4;

    //for taking input;
    cout << "Enter the value of m1 and m2 : ";
    cin >>m1 >> m2;

    int sum = 0;
    sum = m1 + m2;

    cout << "The sum of two numbers is : " << sum;
   return 0;
}