#include<iostream>
using namespace std;
int main(){
    int s=0;
    int n=0;
    while(n>=0){
        s=s+n;
        cout<<"Enter number for sum: ";
        cin>>n;
    }
    cout<<"Sum : "<<s;
}