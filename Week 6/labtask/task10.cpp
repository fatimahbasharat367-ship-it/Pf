#include<iostream>
using namespace std;

int main() {
    string alp;
    cout << "Enter the alphabet :";
    getline(cin, alp);
    string shift;
    cout << " Shift string :";

    for(int i=0; i<alp.length(); i++ )
    {
        if (alp[i] == ' '){
            continue;
        }
         if ( alp[i] == 'z'){
            alp[i] = 'a';
        }
        else  if (alp[i] == 'Z'){
             alp[i] = 'A';
        }
        else {
        alp[i] = alp[i]+1 ;
        }
    }
     cout << shift << "" << alp;
   return 0;
}