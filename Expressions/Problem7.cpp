#include<iostream>
using namespace std;

int main() {

double megabyte;
cout << " Enter the size of MegaBytes : ";
cin >> megabyte;

double kilobyte;
kilobyte = megabyte * 1024;

double byte;
byte = kilobyte * 1024;

double bits;
bits = byte * 80;

cout << " Size in bits : " << bits ;

   return 0;
}