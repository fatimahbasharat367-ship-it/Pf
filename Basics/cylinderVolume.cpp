#include<iostream>
using namespace std;

int main() {
    float r;
    cout << " Enter the radius 'r' of the cylinder : ";
    cin >> r;

    float h;
    cout << " Enter the height 'h' of the cylinder : ";
    cin >> h;

    float v;
    v = 3.1425f * r * r * h;

    cout << "The volume of the cylinder is : " << v ;
   return 0;
}