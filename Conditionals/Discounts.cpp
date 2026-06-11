#include<iostream>
using namespace std;

int main() {

    int bill;
    cout << "Enter the bill of the Customer : ";
    cin >> bill;

   if(bill >= 500){
    int Total;
    Total = bill*20/100;
    cout << "Congratulations You got a discount of 20%. "  << endl;
    cout << "Your bill after discount is : " << bill - Total;
   }
   else if(bill>100 && bill<500){
    int Total;
    Total = bill*10/100;
    cout << "Congratulations You got a discount of 10%. "  << endl;
    cout << "Your bill after discount is : " << bill - Total;
   }
   else{
    cout << "You got no discount. Do more shopping for discount.";
   }
   return 0;
}