#include<iostream>
using namespace std;

int main() {
    float force;
    cout << " Enter the force on the Object : ";
    cin >> force;

    float accerlation;
    cout << " Enter the accerlation :";
    cin >> accerlation;

    float mass;
    mass = force/accerlation;
    cout << " The mass is : " << mass;
   return 0;
}