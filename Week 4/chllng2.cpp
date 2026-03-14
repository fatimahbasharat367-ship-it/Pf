# include <iostream>
using namespace std;
int main(){
float salary, price, peradvn, advance;
salary=10000;
price=50000;
peradvn=5000;
advance=(6*salary)*0.5;
if(advance == 50000){
    cout<< "Ali can buy a laptop with 6 months advance.";
}
else{
    int monthrequired=price/peradvn;
    cout<< "Months required to buy a laptop " <<monthrequired;
}

}
