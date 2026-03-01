# include <iostream>
using namespace std;
main ()
{
cout << "Enter the student's name: ";
string name;
cin >> name;
cout << "Enter matric marks: ";
float matric, inter, ecat;
cin >> matric;
cout << "Enter inter marks: ";
cin >> inter;
cout << "Enter ecat marks: ";
cin >> ecat;
float aggregate;
aggregate = (matric/1100)*10 + (inter/550)*40 +(ecat/400)*50;
cout<< "The total agrregrate is: " << aggregate << " % ";
}