# include <iostream>
using namespace std;
int main (){
    string passcode, password;
    cout <<"Enter the password:";
    cin >> password;
    passcode = "anim2";
    if(passcode == password){
        cout<<"Welcome";
    }
    else{
        cout<<"Password is incorrect.";
    }
}