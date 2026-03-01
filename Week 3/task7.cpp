# include <iostream>
using namespace std;
main ()
{
cout << " Enter the size in megabytes: ";
float megabytes;
cin >> megabytes;

float bits;
cin >> bits; 
bits = (megabytes*1024*1024*8);

cout << " The total number of bits are : " << bits << " bits. ";
}









