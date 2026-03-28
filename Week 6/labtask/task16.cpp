#include<iostream>
using namespace std;

int main() 
{
    float num[4];
    cout<<"Enter the number of quarters: ";
    cin>>num[0];
    cout<<"Enter the number of dimes: ";
    cin>>num[1];
    cout<<"Enter the number of nickels: ";
    cin>>num[2];
    cout<<"Enter the number of pennies: ";
    cin>>num[3];
    cout<<endl;
    float total=num[0]*0.25+num[1]*0.10+num[2]*0.05+num[3]*0.01;
    float ttlamnt=0;
    cout<<"Enter the total amount due: ";
    cin>>ttlamnt;
    if(ttlamnt<=total){
        cout<<"Can you pay the amount? : YES";
    }
    else{
        cout<<"Can you pay the amount? : NO";
    }
    
   return 0;
}