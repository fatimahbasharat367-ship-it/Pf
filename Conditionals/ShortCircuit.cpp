#include<iostream>
using namespace std;

int main() {
    int a, b, i;
    a = 5;
    b = 10;
    i = 5;

    //1st condition is checked only in and operator and increment does not works next;
    if( a > b && ++i<= b){
     }
      cout << i;
   return 0;
}