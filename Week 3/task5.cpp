# include <iostream>
using namespace std;
main ()
{
    float charge, time, current;
 cout<< " Enter the charge in charge in Coulombs: ";
 cin >> charge;
 cout<< " Enter the time in the seconds: ";
 cin >> time;
 current = charge/time;
 cout << " The value of current is : " << current << " amperes ";
}