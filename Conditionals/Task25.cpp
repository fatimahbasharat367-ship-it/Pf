#include<iostream>
using namespace std;

int main() {
    string str ;
    string password ;
    cout << " Enter the id : ";
    cin >> str;
 
    if ( str == "admin" ){
        cout << " Login Succesful. " << endl;
        
        cout << " Enter the password : ";
        cin >> password;

        if ( password =="1234"){
            cout << " Welcome Bruh... ";
        }else {
            cout << " Wrong Password. ";
        }
       
    }else{
         cout << " Wrong Password. " << endl;
          cout << " Try Again. ";
    }
}
       