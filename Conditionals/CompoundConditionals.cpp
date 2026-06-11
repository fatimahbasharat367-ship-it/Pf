#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age>=12 && age<=50){
        cout <<"You are Young."<< endl;
    }
    else{
        cout << "You are not Young." << endl;
    }

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks >= 900 || marks == 1100)
    {
        cout << "You are eligible.";
    }
    else
    {
        cout << "You are not eligible.";
    }
   return 0;
}