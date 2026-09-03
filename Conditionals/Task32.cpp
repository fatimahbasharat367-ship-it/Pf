#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your Marks : ";
    cin >> marks;

    char state;

    if(marks >= 80){

        cout << "Enter Y if Student passed & Enter N if student failed :";
        cin >> state;
        if(state == 'Y'){
            cout << "Congratulations ! You Got Admission on Scholarship.";
        }else {
            cout << "Entry Test Required for Scolarship.";
        }
    }else if(marks >= 60 && marks <= 79){
        cout << "Admission Eligible. ";
    }else{
        cout << "Not Eligible.";
    }
   return 0;
}