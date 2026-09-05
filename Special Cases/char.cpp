#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a Character : ";
    cin >> ch;

    if (isalpha(ch)){
        cout << "Its an Alphabet\n" ;
    }

   else if (isdigit(ch)){
        cout << "Hehe it's a Digit.";
    }

    else 
    {
        cout << "It's a Simple character. ";
    }
   return 0;
}