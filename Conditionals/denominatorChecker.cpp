#include<iostream>
using namespace std;

int main() {
    int a, b, x;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;
    
    if(b==0){
        cout << "The denominatir is 0.";
    }
    else{
        x=a/b;
        cout << "The result is : " << x ;
    }
   return 0;
}