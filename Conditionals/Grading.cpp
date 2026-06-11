#include<iostream>
using namespace std;

typedef int marks;
int main() {
    marks m1, m2, m3;

    cout << "Enter the marks of subject Biology. ";
    cin >> m1;

    cout << "Enter the marks of subject Chemistry. ";
    cin >> m2;

    cout << "Enter the marks of subject Physics. ";
    cin >> m3;

    int total;
    total = m1 + m2 + m3;
     int average;
     average = total/3;

     if(average>=85){
        cout << "You Got A Grade. ";
     }
     else if(average>=70){
        cout << "You Got B grade. ";
     }
     else if(average>=50){
        cout << "You Got C grade. ";
     }
     else
     {
        cout << "You got D grade. ";
     }
   return 0;
}