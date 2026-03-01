# include <iostream>
using namespace std;
main ()
{
string name;
float weight, days;
cout << "Enter the name of person: ";
cin>> name;

cout << "Enter the target weight: ";
cin>> weight;

days = weight*15;

cout << "You need " << days <<" to loss your weight." ;
}