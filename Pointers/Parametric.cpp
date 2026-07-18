#include<iostream>
using namespace std;

int max(int x, int y){
   return  x > y ? x : y ;
}

int min(int x, int y){
   return  x < y ? x : y ;
}

int main() {
    int x;
    cout << "Enter the value of x : ";
    cin >> x;

    int y;
    cout << "Enter the value of y : ";
    cin >> y; 

    int (*fp)(int, int);
    fp = max;
    (*fp)(x, y);

   return 0;
}