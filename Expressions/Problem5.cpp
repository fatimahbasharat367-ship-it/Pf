#include<iostream>
using namespace std;

int main() {
    float charge;
    cout << " Enter the Charge ( Q ): " ;
    cin >> charge;

    float time;
    cout << " Enter the time ( t ): ";
    cin >> time;
    
    float current;
    current = charge / time;
    cout << " The current ( I ) is : " << current; 
   return 0;
}