# include <iostream>
using namespace std;
int main(){
   string word1, word2;
   cout << "Enter 1st word:";
   cin >> word1;
   cout << "Enter 2nd word:";
   cin >> word2;
   if(word1 == word2){
    cout<<" Yes words are same.";
   }
   else{
    cout<< " Words are different.";
   }
}