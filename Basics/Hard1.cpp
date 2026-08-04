#include<iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter the value of n : ";
    cin >> n;

    if (  n > 0){
        cout << " The number you enter is positive. "; 
    }else if (n < 0){
    cout << " The number you enter is negative.";   
    }else 
    cout << " The number you enter is zero. ";
  
   return 0;
}