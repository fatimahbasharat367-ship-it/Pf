#include<iostream>
using namespace std;

void add(int num1, int num2);

int main() {

    int num1, num2;
    cout << " Enter 1st Number : ";
    cin >> num1;
    cout << " Enter 1st Number : ";
    cin >> num2;
    add(num1, num2);
}
    void add(int num1, int num2)
    {
      int sum;
     sum = num1 + num2;
     cout << " The Sum of Two Numbers is : " << sum ;
    }
