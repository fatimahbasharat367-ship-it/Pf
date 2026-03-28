#include<iostream>
using namespace std;
int main(){
    string students[5];
    cout<<"Enter the Name of 5 students 1 by 1: "<<endl;
    for(int i=0;i<5;i++){
        cin>>students[i];
    }
    cout<<"Student names are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<students[i]<<endl;
    }
}