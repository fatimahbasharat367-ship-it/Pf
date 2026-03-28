#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    string pdName[n];
    float pr[n];
    float total[n];
    int qN[n];
    for(int i=0;i<n;i++){
        cout<<"Enter name of product "<<i+1<<" : ";
        cin>>pdName[i];
        cout<<"Enter price of "<<pdName[i]<<" : $";
        cin>>pr[i];
        cout<<"Enter quantity of "<<pdName[i]<<" : ";
        cin>>qN[i];
        cout<<endl;
        total[i]=pr[i]*qN[i];
    }
    
    cout<<endl;
    cout<<"Product Inventory Report"<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0;i<n;i++){
        cout<<pdName[i]<<": $"<<pr[i]<<", "<<qN[i]<<" in stock, Total value: $"<<total[i]<<endl;
    }
}