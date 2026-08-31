#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int num6, num7, num8, num9, num10;
    int num11, num12, num13, num14, num15;

    int sum, minus, multiple;

    cout << "Enter First Five numbers : ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    sum = num1 + num2 + num3 + num4 + num5;

    cout << " The sum of First Five Numbers is : " << sum << endl ;

    cout << "Enter the Next Five Numbers : " ;
    cin >> num6 >> num7 >> num8 >> num9 >> num10;

    multiple = num6 * num7 * num8 * num9 * num10;

    cout << " The Multiple of Next Five Numbers is : " << multiple << endl ;

    cout << "Enter Next 5 Numbers : " ;
    cin >> num11 >> num12 >> num13 >> num14 >> num15;

    minus = num11 - num12 - num13 - num14 - num15;

    cout << " The Subtraction of Next Five Numbers is : " << minus << endl ;
     
    int addition ;
    addition = sum + multiple ;

    int subtraction;
    subtraction = addition - minus ;

    cout << " The Final Result is : " << subtraction ;
   return 0;
}