#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int multiple = 0;
    for(int i = 1; i <= 10; i++){
        multiple = i*n;
        cout << n << " * " << i << " = " << multiple << endl;
    }
   return 0;
}