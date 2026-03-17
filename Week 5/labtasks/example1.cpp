
#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    for(int x=1;x<=rows;x++ ){
        for(int y=1;y<=x;y++)
        
        cout<<"*";
        cout<<"\n";
    }
}
