#include<iostream>
using namespace std;

int main() {
    float initial;
    cout << " Enter initial Velocity : " ;
    cin >> initial;

    float accerlation;
    cout << " Enter the accerlation : ";
    cin >> accerlation;

    float time;
    cout << " Enter the time : ";
    cin >> time;

   float final;
   final = ( accerlation * time ) + initial  ;
   
   cout << " The final velocity is : " << final;
   return 0;
}
