# include <iostream>
using namespace std;
main ()
{
cout << "enter a 4 digit code: ";
int number, sum;
cin >> number;

sum=sum+(number%10);
number=number/10;

sum=sum+(number%10);
number=number/10;

sum=sum+(number%10);
number=number/10;

sum=sum+(number%10);
number=number/10;
cout<<"Sum of Individual digits is: "<<sum;
}