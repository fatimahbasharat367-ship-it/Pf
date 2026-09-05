#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;
    int i = 2;

    if( a < b && ++i <= b ){
        cout << "It's Completely True.";
    }else {
        cout << "It's Not True in this Case.";
    }
   return 0;
}