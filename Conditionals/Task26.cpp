#include<iostream>
using namespace std;

int main() {
    int age;
    float income;
    char jobType;

    cout << "Enter your Age: ";
    cin >> age;

    cout << "Enter your Monthly Income: ";
    cin >> income;

    cout << "Enter your Job Type (P = Permanent, C = Contract): ";
    cin >> jobType;

    if (age < 18) {
        cout << " Loan Denied: You are underage.";
    } else if (income < 25000) {
        cout << " Loan Denied: Income too low.";
    } else if (jobType == 'C' && income < 50000) {
        cout << " Loan Denied: Contract employees need at least 50,000 income.";
    } else if (age > 60 && income < 40000) {
        cout << " Loan Denied: Senior citizens need minimum 40,000 income.";
    } else {
        if (income >= 100000) {
            cout << " Loan Approved: Premium Customer (High Limit).";
        } else if (income >= 50000) {
            cout << " Loan Approved: Standard Customer.";
        } else {
            cout << " Loan Approved: Basic Customer.";
        }
    }

    return 0;
}
