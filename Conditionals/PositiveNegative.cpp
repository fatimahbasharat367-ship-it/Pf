#include<iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num>1){
        cout << "The number you enter is a positive number.";
    }
    else if(num == 0){
        cout << "The number you enter is neither positive nor negative.";
    }
    else{
        cout << "The number you entered is an negative number.";
    }
   return 0;
}