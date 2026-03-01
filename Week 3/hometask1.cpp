# include <iostream>
using namespace std;
main ()
{
 cout << "Enter the number of sides of polygon: ";
 float sides;
 cin >> sides;

 float angles;
 cin >> angles;
 angles = (sides-2)*180;
 
 cout << "The total number of  internal angles are:" << angles << "degrees.";
 } 
