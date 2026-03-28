#include<iostream>
using namespace std;

int main() {
   int n;
   cout << " Enter the number of resistance :";
   cin >> n;
   float sum=0;

   float arr[n]; // array ha length i boxes ky number ;
   for (int i=0; i<n; i++){
    cout << "Enter resistance of capacitor:" << endl;
    cin >> arr[i];

    sum = sum + arr[i];
   }
   cout << " The total resistance of the series circuit is " << sum << " ohms. " ;
   return 0;
}