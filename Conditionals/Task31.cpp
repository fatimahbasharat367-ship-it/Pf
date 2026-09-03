#include<iostream>
using namespace std;

int main() {
    float purchase ;
    cout << "Enter the purchase Amount :";
    cin >> purchase;

    string type;
    float Bill;
   
    if(purchase >= 5000){
    cout << " The Coustomer is Member or Not : ";
    cin >> type;
       if(type == "member" ){
        Bill = purchase - (purchase * 0.20 );
        cout << " Congratulations ! You got 20% Discount.";
       }else {
        Bill = purchase - (purchase * 0.10 );
        cout << " Congratulations ! You got 10% Discount.";
       }

    }else {
        cout << "Your Bill is : " << purchase;
    }
   return 0;
}