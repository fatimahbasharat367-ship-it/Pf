#include<iostream>
using namespace std;

int main() {
     string code;
    cout << "Enter the Passcode : ";
    cin >> code;

    int num, amount, deposit;
    int balance ;
    balance = 10000;

    if ( code == "1234" ){
      cout << "1 : Balance Check. " << endl;
      cout << "2 : Cash Withdraw. " << endl;
      cout << "3 : Deposit. " << endl;
      cout << "4 : Exit. " << endl; 

      cout << "Choose Number From Above List : ";
      cin >> num;

      if (num == 1){
        cout << "Your Balance is : " << balance ;
      }
      else if(num == 2 )
      
      {
        cout << "Enter how much Amount do you want Withdraw : ";
        cin >> amount ;
        
        if(amount > balance){
            cout << " Insufficient Funds. ";
        }else if (amount % 500 != 0){
            cout << "ATM only allows multiples of 500. ";
        }else {
        balance -= amount;
        cout << "Transaction successful!" << endl;
        cout << "Remaining Balance: " << balance;
        }
      }
      else if(num == 3 ){
        cout << "How Much Amount do you want to deposit ? ";
        cin >> deposit ;

        balance += deposit;

        cout << "Your Blance is : " << balance ;

      }
      else {
        return 0;
      }

    }else 
    {
        cout << " Invalid Pin. ";
        return 0;
    }
   return 0;
}