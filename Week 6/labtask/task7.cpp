#include<iostream>
using namespace std;

int main() {
    string word;
    cout <<"Enter the word:";
    cin >> word;
    char letter;
    cout <<"Enter the letter:";
    cin >> letter;
    bool isfound = false;

    for (int i=0 ;word[i] !='\0'; i++)
    {
        if (word[i]== letter){
        isfound = true;
        break;
        }
    }
      if(isfound){
        cout << letter <<" " <<"is found in" <<"" << word;
      }
      else
      {
        cout << letter <<" " <<"is not found in " << word;
      }
   return 0;
}