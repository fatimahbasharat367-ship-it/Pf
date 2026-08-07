#include<iostream>
using namespace std;

int main() {
    int megabytes;
    cout << " Enter the Megabytes number :";
    cin >> megabytes;

    int megabite;
    // 1 mega byte = 1024
    megabite = megabytes * 1024 ;

    int kilobyte; 
    kilobyte =  megabite * 1024;

    int byte;
    byte = kilobyte * 8;
    // 1 byte = 8 bits

    cout << " The total bits in " << megabytes << " megabytes is : " << byte;

   return 0;
}