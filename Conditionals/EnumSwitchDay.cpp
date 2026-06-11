#include<iostream>
using namespace std;

enum days{mon=1, tues, wed, thurs, fri, sat, sun};

int main() {

  int num;
  cout << "Enter the value : ";
  cin >> num;

  days d;
  d = static_cast<days>(num);

   switch(num){
        case 1 : cout << "Monday" ; break;
        case 2 : cout << "Tuesday" ; break;
        case 3 : cout << "Wednesday" ; break;
        case 4 : cout << "Thursday" ; break;
        case 5 : cout << "Friday" ; break;
        case 6 : cout << "Saturday" ; break;
        case 7 : cout << "Sunday" ; break;
        Default: cout << "Invalid input"; break;
    }
   return 0;
}