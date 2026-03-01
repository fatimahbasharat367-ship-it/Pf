# include <iostream>
using namespace std;
main ()
{
cout << "Enter the number of wins:";
int wins;
cin >> wins;

cout << "Enter the number of draws:";
int draws;
cin >> draws;

cout << "Enter the number of losses:";
int losses;
cin >> losses;

int total;
cin >> total;
total = (wins*3 + draws*1);

cout << " The team has obtained :" << total << " points.";
}


