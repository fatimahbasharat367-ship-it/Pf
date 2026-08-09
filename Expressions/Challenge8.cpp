#include<iostream>
using namespace std;

int main() {
   float pound ;
   cout << " Enter the size of fertilizer bag in pounds : ";
   cin >> pound;

   float totalcost;
   cout << " Enter the cost of the bag : ";
   cin >> totalcost;

   float totalsqft;
   cout << "The area covered by the bag in sqft : ";
   cin >> totalsqft;

   float perpoundcost;
   perpoundcost = totalcost/pound;
   cout << "The cost of the fertilizer per pound is : " << perpoundcost << endl;

   float persqftcost;
   persqftcost = totalcost/totalsqft;
   cout << "The cost of fertilizing the area per square foot : " << persqftcost;
   return 0;
}