#include<iostream>
using namespace std;

int main() {
    //----------- 1st -------------------
    //char name[] = {'J', 'o', 'h', 'n', '\0'};
    //cout << name;

    //-------------- 2nd ----------------
   // char name[] = "John";
    //cout << name;

    //-----------3rd---------------------
    char name[] = "John\0";
    cout << name;

   return 0;
}