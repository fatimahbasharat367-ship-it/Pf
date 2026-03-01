# include <iostream>
using namespace std;
main ()
{
float i, p, chance;

cout << " Enter imposter count: ";
cin >> i;

cout << "Enter player count: ";
cin >> p;

cin >> chance;

chance = 100* (i/p);
cout << " Chance of being imposter:" << chance <<" % ";
}




