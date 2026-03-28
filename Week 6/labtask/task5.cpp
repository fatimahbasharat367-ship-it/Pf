#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number:";
    cin >> n;
    int numbers[n];
    for(int i=0; i<=n; i=i+1 ){
    cout <<"The number you entered :" << i <<endl;
    }

   return 0;
}