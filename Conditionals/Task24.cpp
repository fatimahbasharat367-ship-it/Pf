#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << " Entyer yoyur marks : ";
    cin >> marks;

    if (marks >= 80){
        cout << " You are eligible of scolarship. ";
    }else if (marks >= 60 && marks <= 79 ){
        cout << " You are eligible of Admission. ";
    }else{
        cout << " You are not Eligible. ";
    }
   return 0;
}