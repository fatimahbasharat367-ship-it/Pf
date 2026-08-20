#include<iostream>
using namespace std;

int main() {
    float temperature;
    cout << " Enter the temperature in C: ";
    cin >> temperature;

    if ( temperature > 0 ){
        cout  << " The temperature is above freezing point. ";
    }else if ( temperature < 0 ){
        cout << " The temperature is below then freezing point. ";
    }else{
        cout << " The temperature is at freezing point. ";
    }
   return 0;
}