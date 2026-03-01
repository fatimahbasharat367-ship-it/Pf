# include <iostream>
using namespace std;
main ()
{
cout << "The weight of the fertilizer bag: ";
float weight;
cin >> weight;

cout << "The cost of the bag: ";
float cost;
cin >> cost;

cout << "The size of the area the bag can cover: ";
float size;
cin >> size;

float unitprice;
unitprice = cost/weight;

float squarefootprice;
squarefootprice=unitprice/size;

cout << " Price of the fertilizer is: " << unitprice <<" cost of using fertilizer each square foot of garden" << squarefootprice;
}
