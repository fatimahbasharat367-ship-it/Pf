#include<iostream>
using namespace std;
int main(){
    int target, money;
    cout<<"Enter money: ";
    cin>>money;
    cout<<"Enter target year: ";
    cin>>target;
    int age=18;

    for(int year=1800;year<=target;year++){
        if(year % 2 == 0){
            money=money- 12000;
        
        }
        else{
            money=money-(12000+50*age);
        }
        age++;
    }
    if(money>=0){
        cout<<"YES!, He will live a carefree life and will have "<<money<<" dollars left";

    }
    else{
        cout<<"He will need "<<-money<<" dollars to survive";
    }
}