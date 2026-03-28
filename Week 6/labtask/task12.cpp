#include<iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter the number of elements:";
    cin >> n; 

    int arr[n];
    int count = 0;
    for (int i=0; i<n; i++){
        int input;
        cout << "Enter Number :";
        cin >> input;
        bool alreadyexists = false ;

        for ( int j = 0; j< count; j++){
            if ( arr[j] == input){
                alreadyexists = true;
                break;
            }
        }

    if (alreadyexists)
    {
        cout << " Already Entered:" << endl;
    }
      else {
        arr[count] = input; 
        cout << " This is a unique number. " << endl;
        count++;
      }
    }
    
   return 0;
}