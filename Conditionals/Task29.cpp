#include<iostream>
using namespace std;

int main() {
    float attendence;
    cout << "What is the Attendence of the Student ? " << endl;
    cout << "Attendence : ";
    cin >> attendence;


    if(attendence >= 75 ){

    float marks;
    cout << "Enter te Marks of the Student : ";
    cin >> marks;

     if (marks >= 50){
        cout << "You are Eligible of getting the Admission. ";

     }else {

        cout << "Not Eligible due to low Marks. ";
     }
    }else{
        
            cout << "Not Eligible due to low attendence. ";
        
    }
   return 0;
}