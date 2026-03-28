#include<iostream>
using namespace std;

int main() {
    string word;
    cout <<"Enter the word:";
    cin >> word;
    string reverse;
    cout << "The reversed string is:";

    for(int i=word.length(); i>=0; i--){
        cout << reverse << word[i];
    }

   return 0;
}