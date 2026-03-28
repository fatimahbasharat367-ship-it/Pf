#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int number[n];
    int count=0;
    cout<<"Enter Numbers one per line: "<<endl;
    for(int i=0;i<n;i++){
        cin>>number[i];

    }
    for(int i=0;i<n;i++){
        if(number[i]%2==0){
            count++;
        }
    }
    cout<<"There are "<<count<<" even numbers";
}