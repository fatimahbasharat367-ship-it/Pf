#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0,modulus;
    while(n!=0)
    {
       modulus=n%10;
       n=n/10;
       sum=sum+modulus;
    }
       cout<<"Sum of digits is "<<sum;
}