#include<iostream>
using namespace std;

int main() {
    int n1;
    cout << "Enter the value n1 :";
    cin >> n1;

    int n2;
    cout << "Enter the value of n2 : ";
    cin >> n2;

    if(n1 > n2){
      cout << "The Larger number is : " << n1;
    }else {
      cout << " The larger number is : " << n2;
    }
    
    // cout << "The Greatest Number in them is : " << temp ;
   return 0;
}