#include<iostream>
using namespace std;

int main() {
    string word;
    cout << word.length();
    cout << "Enter the word: ";
     cin >> word;
    for(int i=0; i<word.length(); i++){
  cout << word[i] << " " << "is found at position" << i << endl;
  }
}