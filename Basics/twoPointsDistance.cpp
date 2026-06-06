#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float  x1, x2, y1, y2;
    cout << "Enter the value of x1 : ";
    cin >> x1;

    cout << "Enter the value of x2 : ";
    cin >> x2;

    cout << "Enter the value of y1 : ";
    cin >> y1;

    cout << "Enter the value of y2 : ";
    cin >> y2;

    float d;
    d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    cout << "The total distance between two points is : " << d ;

   return 0;
}