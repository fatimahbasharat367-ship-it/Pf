#include<iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num%2==0){
        cout << "The number you enter is an even number.";
    }
    else{
        cout << "The number you entered is an odd number.";
    }
   return 0;
}