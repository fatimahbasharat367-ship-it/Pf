#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float a, b, c, d, r1, r2;

   cout << "Enter the value of a : ";
   cin >> a;

   cout << "Enter the value of b : ";
   cin >> b;

   cout << "Enter the value of c : ";
   cin >> c;

   //discriminanat part --> b*b - 4ac;
   d = (b*b) - 4*a*c;

   if(d==0){
    cout << "Roots are real and equal." <<endl;
    float eqlRoots = -b/(2*a);
    cout << "The result will be : " << eqlRoots;
   }
   else if(d>0){
    cout << "Roots are Real but not equal." << endl;
    r1 = (-b + sqrt(d))/(2*a);
    r2 = (-b - sqrt(d))/(2*a);
    cout << "The result will be : " << r1 << " , " << r2;
   }
   else{
    cout << "The roots are imaginary.";
   }
   return 0;
}