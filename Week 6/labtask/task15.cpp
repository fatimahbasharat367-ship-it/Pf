#include<iostream>
using namespace std;

int main() {
   int line[2];
   cout << " Enter the number of elements for the 1st array:" << endl;
   cin >> line[2];

   for (int i=0; i<2; i++){
    cout << "Enter 2 elements for the first array, one per line :" << endl;
        cin >> line[i];
   }
  
   int n;
   cout << "Enter the number of elements for the second array :";
   cin >> n;
   int arr[n];
   for (int j=0; j<n; j++){
     cout << n <<" Enter element :" << j +1 << ", " ;
     cin >> arr[j];
   }

 cout << "Resulting array:[" << line[0] << " , " ;
 for (int j = 0; j < n; j++ ){
    cout << arr[j] << " , ";
 }
 cout << line[1] << "] " << endl;
   return 0;
}