# include <iostream>
using namespace std;
int main(){
 float tem1, tem2;
 cout<<"Enter the temperature of first city:";
 cin >> tem1;
 cout <<"Enter the temperature of second city:";
 cin >> tem2;
 float diff;
 diff = tem1 - tem2;
 if(diff > 10){
    cout <<"Difference is too big.";
 }
 else{
    cout<<"Program ends.";
 }
}