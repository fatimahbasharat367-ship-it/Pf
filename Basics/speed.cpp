#include<iostream>
using namespace std;

int main() {
    cout << " Enter the value of v : ";
    float v;
    cin >> v;

    cout << " Enter the value of u : ";
    float u;
    cin >> u;

    cout << " Enter the value of a : ";
    float a;
    cin >> a;

    float speed;
    speed = (u*u - v*v)/ (2*a);
    cout << " The Calculated Speed is : " << speed;
   return 0;
}