#include<iostream>
using namespace std;

int main() {
    int A[10];
    cout << "Enter the numbers of array : ";
    for( int i = 0; i < 10; i++){
    cin >> A[i];
    }

    for(int i = 0; i < 10; i++){
        if(A[i] == 6 ){
            cout << "The number found. ";
            return 0;
        }
    }
    cout << "The number did not found. ";
   return 0;
}