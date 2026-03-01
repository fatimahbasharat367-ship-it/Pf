# include <iostream>
using namespace std;
main ()
{
cout << "Enter The name of the movie: ";
string movie;
cin>> movie;

cout << "Enter adult ticket price: ";
float adultticketprice;
cin >> adultticketprice;

cout << "Enter the child ticket price: ";
float childticketprice;
cin >>childticketprice;

cout << "Enter the number of adult tickets sold: ";
float adultticketnumber;
cin>> adultticketnumber;  

cout << "Enter the number of child tickets sold: ";
float childticketnumber;
cin >> childticketnumber;


cout <<"Enter the percentage donated to charity:";
float percentage;
cin >> percentage;

float total;
total = (adultticketnumber*adultticketprice)+(childticketnumber*childticketprice);

float charity=(percentage*total)/100;


float remaining;
remaining = total - charity;

cout <<"movie name is " <<movie << endl;
cout <<"total money is" << total <<endl;
cout <<"charity is " << charity << endl;
cout <<" remaining money is " << remaining;
} 






 