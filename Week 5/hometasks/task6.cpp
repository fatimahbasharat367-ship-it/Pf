#include<iostream>
using namespace std;
int main(){
    int table;
    int n=0;
    cout<<"Enter number for table: ";
    cin>>n;
    
    for(int i=1;i<=10;i++){
        table=n*i;
        cout<<n<<" x "<<i<<" = "<<table<<"\n";

    }

}