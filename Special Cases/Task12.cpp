#include <iostream>
using namespace std;

int main() {
    double temp ; 
    cout << "What is the Body Temperature of Patient : ";
    cin >> temp;
    
    bool fever = (temp > 37.0);

    cout << "Temperature = " << temp << "°C" << endl;
    cout << "Do you have fever? " << (fever ? "Yes" : "No") << endl;

    return 0;
}
