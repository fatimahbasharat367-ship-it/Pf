#include<iostream>
using namespace std;

int main() {
    float initial;
    cout << " Enter initial Velocity : " ;
    cin >> initial;

    float final;
    cout << " Enter the Final Velocity : ";
    cin >> final;

    float time;
    cout << " Enter the time : ";
    cin >> time;

   float accerlation;
   accerlation = ( final - initial ) / time;

   cout << " The accerlation is : " << accerlation;
   return 0;
}