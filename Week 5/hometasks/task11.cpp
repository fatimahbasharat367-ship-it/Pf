#include<iostream>
using namespace std;
int main(){
    int x=0,y=0,gcd=1;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    for ( int i=1; i<=x&&i<=y; i++)
    {
        if(x%i==0&&y%i==0){
           gcd=i; 
        }
    }
    int lcm;
    lcm=(x*y)/gcd;

    cout<<"GCD is "<<gcd<<"\n";
    cout<<"LCM is "<<lcm;
}