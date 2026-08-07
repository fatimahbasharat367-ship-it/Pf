#include<iostream>
using namespace std;

int main() {

    float Pounds ;
    cout << " Enter how many dollars you want to convert into Pkr : " ;
    cin >> Pounds ;

    float Rs ;
    Rs = Pounds * 0.45;

    cout <<  Pounds << " Pounds is equal to " << Rs << " Kilograms ." ;
   return 0;
}