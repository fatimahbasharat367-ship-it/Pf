# include <iostream>
using namespace std;
int main (){
    float bill, discount, amount;
    cout<<" Enter the amount:";
    cin >> amount;
    
    if(amount <= 5000){
    discount = amount*0.05; 
    }
    else{
    discount = amount*0.10;
    }
    bill = amount - discount;
    cout << "Your discounted bill is" <<bill;
}