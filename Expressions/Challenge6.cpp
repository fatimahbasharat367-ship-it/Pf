#include<iostream>
using namespace std;

int main() {
   int weightloss;
   cout << " How much weight do you want to lose :";
   cin >> weightloss;

   // as 17 days are required to lose 1 kg weight ;

   int days;
   days = weightloss * 17 ;
   cout << " You will need " << days << " days to lose " << weightloss << " weight ";

   return 0;
}