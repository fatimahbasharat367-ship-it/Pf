#include<iostream>
using namespace std;

int main() {

    string name;
    cout << " Enter Your Name :";
    getline(cin , name);

    int sub1;
    cout << " Enter the Subject 1 marks : " ;
    cin >> sub1;

    int sub2;
    cout << " Enter the Subject 2 marks : " ;
    cin >> sub2;
    
    int sub3;
    cout << " Enter the Subject 3 marks : " ;
    cin >> sub3;
    
    int sub4;
    cout << " Enter the Subject 4 marks : " ;
    cin >> sub4;

    int sub5;
    cout << " Enter the Subject 5 marks : " ;
    cin >> sub5;

    float marks;
    marks = sub1 + sub2 + sub3 + sub4 + sub5;
    cout << " Your Total Obtained Marks is : " << marks << endl;

    int total = 500;
    float percentage ;
    percentage =  ( marks / total ) * 100;
    cout << " Your Percentage is : " << percentage << " % " ;
   return 0;
}