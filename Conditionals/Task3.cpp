#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << " Enter the marks :";
    cin >> marks;
  
   if ( marks >= 80 ){
    cout<< " Your Grade is A. ";
   } else if ( marks >= 70)
{
   cout << " Your Grade is B.";
}else if ( marks >= 60 ) {
    cout << " Your Grade is C.";
}else if ( marks >= 50 ){
    cout << " Your Grade is D.";
}else {
    cout << " Your grade is F.";
}

   return 0;
}