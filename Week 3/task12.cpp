# include <iostream>
using namespace std;
main ()
{
cout <<" Enter the current population: ";
int population;
cin >> population;

cout << "Birth per month: ";
int per_month;
cin >> per_month;

int number;
number = 360 * per_month + population ;


cout << "population in three decades will :" << number ;
}


