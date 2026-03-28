#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int number[n];
    cout<<"Enter Numbers one per line: "<<endl;
    for(int i=0;i<n;i++){
        cin>>number[i];

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+number[i];
    }
    cout<<"Sum of all elements: "<<sum;
}
