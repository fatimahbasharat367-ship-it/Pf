#include<iostream>
using namespace std;
 
int main() {

     string movie;
     cout << " Enter the moive nanme : ";
     getline(cin, movie);
     
     int adult;
     cout << " Enter the adult ticket price : ";
     cin >> adult;

     int child;
     cout << " Enter the child ticket price : ";
     cin >> child;

     int adultticket;
     cout << " How many adult tickets sold : ";
     cin >> adultticket;

     int childticket;
     cout << " How many Child tickets sold : ";
     cin >> childticket;

    float percentage;
     cout << " Enter the percentage of Amount you want to donate : " ;
     cin >> percentage;

     float totalrevenue;
     totalrevenue = ( adult * adultticket ) + ( child * childticket );
     cout << " The total revenue from " << movie << " movie is : " << totalrevenue;

     float afterdonation;
     float donation;
     donation = ( totalrevenue * percentage ) / 100;
     afterdonation = totalrevenue - donation;

     cout << " Movie name is : " << movie ;
     cout << " Remaining Amount Achieved from the " << movie << " movie is : " << afterdonation;
    return 0;
 }