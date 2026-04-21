#include<iostream>
using namespace std;

   int Addition( int x , int y ){
   int sum = x + y;
   return sum;
   }

int main() {
  int total = Addition(20 , 30);
    cout <<"The total sum  is " <<total;

   return 0;
}