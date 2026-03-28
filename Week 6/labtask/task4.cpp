#include<iostream>
using namespace std;

int main() {
    int number[5];
     for(int i=0;i<5;i=i+1)
     {
        cout << "Enter number:";
        cin >> number[i];
     }
     cout <<"The 1st element in array is :" <<number [0] << endl;
     cout <<"The last element in array is :" <<number [4] << endl;
     
   return 0;
}