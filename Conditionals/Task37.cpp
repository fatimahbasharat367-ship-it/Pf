#include<iostream>
using namespace std;

int main() {
    int s1, s2, s3;

    cout << "Enter the side Number 1 : ";
    cin >> s1;

    cout << "Enter the side Number 2 : ";
    cin >> s2;

    cout << "Enter the side Number 3 : ";
    cin >> s3;

    if ( s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2 )
{

    if(s1 == s2 && s1 == s3 ){
     cout << "All Sides are  Equilateral. ";
    }else if ( s1 == s2 && s1 != s3  || s3 == s2 && s3 != s1  || s1 == s3 && s1 != s2 ){
        cout << "All Sides are Isosceles. ";
    }else {
        cout << "All Sides are Scalene";
    }

}
else
{
    cout << "Not a Valid Triangle. ";
}
   return 0;
}