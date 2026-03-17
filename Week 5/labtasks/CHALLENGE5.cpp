#include <iostream>
using namespace std;

int main()
{
    string pin="1234",upin;
    int c_balance=1000;

    int choice;

    
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter pin: ";
        cin >>upin;

        if(upin == "1234")
        {
cout << "Login Successful"<<endl;
            break;
        }
        else
        {
            cout << "Wrong Pin"<<endl;
        }

        if(i == 3 && !(upin == "1234"))
        {
            cout << "Too many attempts. Program End."<<endl;
            return 0;
        }
    }

    for(int j = 1; j <= 30; j++)
    {
        cout << endl<<"---- ATM ----"<<endl;
        cout << "1. Check Balance"<<endl;
        cout << "2. Deposit Money"<<endl;
        cout << "3. Withdraw Money"<<endl;
        cout << "4. Exit"<<endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Your current balance is: "<<c_balance<<" Rupees"<<endl;

        }
        else if(choice == 2)
        {
        
            {
               int deposit;cout << "Enter amount for deposit: "<<endl;
                cin>>deposit;
                c_balance=deposit+c_balance;
                cout<<"Amount Deposited Successfully!"<<endl;
            }
            
        }
        else if(choice == 3)
        {
           int withdraw;cout << "Enter amount for withdraw: ";
            cin >>withdraw;
           if(withdraw<=c_balance){
            c_balance=c_balance-withdraw;
            cout<<"PLease Collect your Money! "<<endl;
        
           }
           else{
            cout<<"Insufficient Balance!"<<endl;
           }
        
        }
        else if(choice == 4)
        {
            cout << "Program Exit"<<endl<<"Thank YOU, For using ATM !!";
            break;
        }
        else
        {
            cout << "Invalid Choice"<<endl;
        }
    }

    
}