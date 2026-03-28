#include<iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter number of elements:"<< endl;
    cin >> n;
    if ( n <= 0){
        cout << " Invalid input :"<< endl;
        return 0;
    }
     int arr[n];
     cout << " Enter " << n << " numbers , one per line. "<< endl;
    for (int i=0; i<n; i++){
           cin >>  arr[i];
    }
    cout << " Numbers in reverse order: "; 
    for (int j= n-1; j>=0; j--)
    {
        cout << arr[j] << " " << endl;
    }
    cout << endl;

   return 0;
}