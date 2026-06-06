//have to modify;

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    int a, b, c;
    cout << "Enter the values of a, b and c :" << endl;
    cin >> a >> b >> c;

    float root1, root2;
    root1 = ( -b+sqrt(b*b-4*a*c))/(2*a);

    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    cout << "The roots of the Quadretic equation are " << root1 << " , " << root2; 
   return 0;
}