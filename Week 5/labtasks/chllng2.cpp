#include<iostream>
using namespace std;
int main(){
    int lnum;cout<<"Enter large number: ";
    cin>>lnum;
    int freq;cout<<"Enter number for frequency: ";
    cin>>freq;
    int count;
    int templnum=lnum;
    for(;lnum>0;lnum=lnum/10){
        int ldigit= lnum%10;
        if(ldigit==freq){
            count++;
        }
    }        
       if(templnum==0&&freq==0){
        count=1;
    }
          cout<<"Frequency of "<<freq<<" in "<<templum<<" is "<<count;
            
}