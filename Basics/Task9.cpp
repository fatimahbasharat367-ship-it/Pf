#include<iostream>
using namespace std;

int main() {
    int gravity = 10;
    float weight, mass;
    cout << "Enter the weight of the object :";
    cin >> weight;

    mass = weight/gravity;
    cout << "The mass is : " << mass;
   return 0;
}