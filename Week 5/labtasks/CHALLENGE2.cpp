#include<iostream>
using namespace std;
int main(){
    for(int a=1;a<=5;a++){
        for(int b=1;b<=a;b++)
        cout<<"*";
        cout<<"\n";
    }
    for(int x=5;x>=1;x--){
       for(int y=1;y<=x;y++)
       cout<<"*";
       cout<<"\n";
    }    

}