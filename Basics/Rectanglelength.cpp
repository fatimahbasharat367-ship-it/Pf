#include<iostream>
using namespace std;

int main() {
    float length;
    cout << " Enter the length of the triangle : ";
    cin >> length ;

    float width;
    cout << " Enter the width : ";
    cin >> width ;

    float area ;
    area = length * width ;
    cout << " The area of the given triangle is : " << area << endl;
   return 0;
}