 /*#include<iostream>
 using namespace std;
 
 int main() {
     int arr[] = {12, 14, 15, 23, 25};
     cout << arr << endl << &arr;
    return 0;
 } 
------------------Pointer--------------*/

 #include<iostream>
 using namespace std;
 
 int main() {
     int n;
     cout << "Enter the number you want to get the factorial of : ";
     cin >> n;
     int multiple = 1;

     for(int i = 5; i >= 1; i--){
        multiple *= i;
     }
     cout << "The factorial of " << n << " is : " << multiple;

    return 0;
 }