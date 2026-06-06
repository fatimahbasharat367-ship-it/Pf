#include<iostream>
using namespace std;

int main() {
    string name; 
    cout << "Kindly enter your full name: ";
    getline(cin , name);

    cout << " Welcome " << name;
   return 0;
}