# include <iostream>
using namespace std;
main ()
{
float int_velocity, fn_velocity, accerlation, time;

cout << "Enter the Initial velocity: ";
cin >> int_velocity;

cout << "Enter accerlation:";
cin >> accerlation;

cout << "Enter time";
cin >> time;

cin >> fn_velocity;
fn_velocity = accerlation * time + int_velocity;

cout << "Final velocity is :" << fn_velocity ;
}

 