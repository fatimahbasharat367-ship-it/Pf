#include<iostream>
using namespace std;
int main(){
    int x=0,y=0,gcd=1;
    cout<<"Enter the 1st num: ";
    cin>>x;
    cout<<"Enter the 2nd num: ";
    cin>>y;
    for ( int i=1; i<=x&&i<=y; i++)
    {
        if(x%i==0&&y%i==0){
           gcd=i; 
        }
    }
    int lcm;
    lcm=(x*y)/gcd;

    cout<<"GCD of "<<x<<" and "<<y<<" is "<<gcd<<"\n";
    cout<<"LCM of "<<x<<" and "<<y<<" is "<<lcm;
}