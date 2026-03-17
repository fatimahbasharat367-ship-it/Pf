#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int forshownum=num;
    int c;
    while(num!=0){
        num=num/10;
        c++;
    }
    if(forshownum==0){
        c=1;
    }
    cout<<"There are "<<c<<" digits in "<<forshownum;
}