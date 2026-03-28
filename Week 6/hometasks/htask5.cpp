#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of customers: ";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char c;
    cout<<"Enter character: ";
    cin>>c;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]==c){
            count++;
        }

    }
    cout<<"Total names starting with "<<c<<" are "<<count;
}