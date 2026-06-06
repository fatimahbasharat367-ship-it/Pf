#include<iostream>
using namespace std;

int main() {
    float basic;
    cout << " Enter your Basic Salary : ";
    cin >> basic;

    float Allowances;
    cout << " Enter the percentage of allowances : " <<endl;
    cin >> Allowances;

    float Deductions;
    cout << "Enter the percentage of Deductions : " <<endl;
    cin >> Deductions;

    float Total = 0;
    Total = basic + ((basic * Allowances)/100) - ((basic * Deductions)/100);

    cout << "The total Salary is : " << Total;

   return 0;
}