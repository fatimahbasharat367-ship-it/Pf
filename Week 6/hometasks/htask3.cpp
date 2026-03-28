#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int number[n];
    int count=0;
    
    cout<<"Enter the Numbers one per line: "<<endl;
    for(int i=0;i<n;i++){
        cin>>number[i];

    }
    int large=number[0],small=number[0];
    for(int i=0;i<n;i++){
       if(number[i]>large){
        large=number[i];
       }
    }
    for(int i=0;i<n;i++){
       if(number[i]<small){
        small=number[i];
       }
    }
    cout<<"Largest number: "<<large<<endl<<"Smallest number: "<<small;
}