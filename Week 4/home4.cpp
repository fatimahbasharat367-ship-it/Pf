# include <iostream>
using namespace std;
int main(){
float red, white, tulip;
cout <<"Enter quantity of red rose:";
cin >> red;
cout <<"Enter quantity of white rose:";
cin >> white;
cout <<"Enter the quantity of tulip:";
cin >> tulip;
float price1, price2, price3, total, discount, aftrdsc;
price1 = red*2.00;
price2 = white*4.10;
price3 = tulip*2.50;
total = price1 + price2 + price3;
if(total>200){
  discount=total*0.2;
  aftrdsc=total-discount;
  cout <<"The original price is:" << total <<endl;
  cout <<"The payable amount is:" <<aftrdsc <<endl;
}
else{
 cout<<"Your bill is:" << total;
}

}