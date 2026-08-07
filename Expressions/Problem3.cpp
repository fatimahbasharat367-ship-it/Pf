#include<iostream>
using namespace std;

int main() {
    string name;
    cout << " Enter your name : " ;
    getline(cin, name);

    int roll_number;
    cout << " Enter your roll number : " ;
    cin >> roll_number;

    float agrregate;
    cout << " Enter your aggregate value : ";
    cin >> agrregate;

    char section;
    cout << " Enter your section : ";
    cin >> section;

    cout << " ------ Your Details ------- " << endl;
    cout << " Name : " << name << endl ;
    cout << " Roll Number : " << roll_number  << endl;
    cout << " Aggregate Value : " << agrregate  << endl;
    cout << " Section : " << section << endl;
   return 0;
}