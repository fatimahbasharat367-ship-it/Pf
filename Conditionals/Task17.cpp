#include<iostream>
using namespace std;

int main() {
    int total ;
    cout << " Enter the total amount of bill : ";
    cin >> total;
    if ( total >= 10000 ){
        cout << " You will get free delievery. ";
    }else if ( total >= 5000 ){
        cout << " Your delivery charges are Rs. 200/-";
    }else{
        cout << " Your delivery charges are Rs. 500/-";
    }
   return 0;
}