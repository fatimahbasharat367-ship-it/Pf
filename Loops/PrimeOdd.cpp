#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the nunmber you want to check : ";
    cin >> n;

    for(int i = 0; i<=n; i++){
    }
    
     if(n%2==0){
            cout << "The number you entered is an even number.";
        }else{
           cout <<  "The number you entered is an odd number. ";
        }
   return 0;
}