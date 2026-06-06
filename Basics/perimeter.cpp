#include<iostream>
using namespace std;

int main() {
    float length;
    cout << " Enter the length of the triangle : ";
    cin >> length ;

    float width;
    cout << " Enter the width : ";
    cin >> width ;

    float perimeter;
    perimeter = 2 * (length + width);
    cout << " The perimeter of the given triangle is : " << perimeter << endl;
   return 0;
}