#include<iostream>
using namespace std;

int main() {
    int n1, n2, max;
    
    cout << "Enter the value of n1 : ";
    cin >> n1;

    cout << "Enter the value of n2 : ";
    cin >> n2;

    if (n1 > n2){
        cout << n1 << " is greater.";
    }
    else {
        cout << n2 << " is greater.";
    }
   return 0;
}