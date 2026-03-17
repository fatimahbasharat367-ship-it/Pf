#include<iostream>
using namespace std;
int main(){
    int num;cout<<"Enter a number: ";
    cin>>num;
    int freq;cout<<"Enter the number for freq: ";
    cin>>freq;
    int count;
    int numforshow=num;
    for(;num>0;num=num/10){
        int lastdigit= num%10;
        if(lastdigit==freq){
            count++;
        }
    }        
       if(numforshow==0&&freq==0){
        count=1;
    }
          cout<<"Frequency of "<<freq<<" in "<<numforshow<<" is "<<count;
            
}