# include <iostream>
using namespace std;
int main(){
string country;
cout <<"Enter your country:";
cin >> country;
float price;
float discount;
float finalprice;
cout <<"Enter the price:";
cin >> price;
if(country== "Ireland" ){
  discount = price * 0.1;
  finalprice= price - discount;
}
else{
discount = price * 0.05;
   finalprice=price - discount;
}
cout <<" Your discounted price is: " << finalprice;
}