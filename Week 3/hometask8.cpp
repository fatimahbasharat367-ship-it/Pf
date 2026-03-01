# include <iostream>
using namespace std;
main ()
{
cout << "enter vegetable price per kg in coins: ";
float vegetableprice;
cin >> vegetableprice;

cout << "enter fruit price per kg in coins: ";
float fruitprice;
cin >> fruitprice;

cout << "enter total gram of vegetable: ";
float vegetableweight;
cin >> vegetableweight;

cout << " enter total kg of fruits: ";
float fruitweight;
cin >> fruitweight;

float rupee = 1.94;

float totalearning;
totalearning = ((vegetableprice * vegetableweight) + ( fruitprice * fruitweight ))/rupee;

cout<<" total earning is : "<< totalearning << "in rupee " <<rupee;
}
