#include<iostream>
using namespace std;

int main() {
    int rollnum;
    cout << "Enter your roll number : ";
    cin >> rollnum;

    if (rollnum>=1){
        cout << "Roll number is valid.";
    }
    else{
        cout<< "Roll NUmber is invalid.";
    }
   return 0;
}