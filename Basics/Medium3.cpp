#include<iostream>
using namespace std;

int main() {
    float number = 500;

    float calculus;
    cout << "Enter the numbers of calculus :";
    cin >> calculus;

    float Dm;
    cout << "Enter the numbers of Discrete Mathematics:";
    cin >> Dm;

    float AP;
    cout << "Enter the numbers of Applied Physics :";
    cin >> AP;

    float BM;
    cout << " Enter the numbers of Basic Mathematics :";
    cin  >> BM;

    float PF;
    cout << " Enter the numbers of Programming Fundamentals :";
    cin >> PF;

    float Total;
    Total = PF + BM + AP + Dm + calculus;
    cout << "The total of all the subjects is : " << Total;

    float percentage;
    percentage = ( Total / number ) * 100 ;
    cout << " Your Percentage is : " << percentage;
   return 0;
}