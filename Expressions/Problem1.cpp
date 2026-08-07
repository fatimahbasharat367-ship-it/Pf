#include<iostream>
using namespace std;

int main() {
  float days;
  cout << " How many days you go to work per Month : " ;
  cin >> days;

  float Dollars;
  cout << " What's your daily earning in Dollars : " ;
  cin >> Dollars;

  float daysInYear;
  daysInYear = 356;

  float MonthsInYear;
  MonthsInYear = 12;

  float SalaryPerMonth;
  SalaryPerMonth = days * Dollars;

  float SalaryAfterYear;
  SalaryAfterYear = SalaryPerMonth * 12;

  float SalaryAfterBonus;
  SalaryAfterBonus = SalaryAfterYear + 2.5;

  float hehe;
  float SalaryAfterTax ;
  hehe = SalaryAfterBonus * 0.25;
  SalaryAfterTax = SalaryAfterBonus - hehe;

  float finalsalary;
  finalsalary = SalaryAfterTax;

  float DollarToPkr;
  DollarToPkr = 1 * 309;

  float SalaryPerDayInUSD;
  SalaryPerDayInUSD = finalsalary / 365;

  float SalaryPerDayInPkr;
  SalaryPerDayInPkr = SalaryPerDayInUSD * 309;
  cout <<" Average Earnings Rate per Day :"<< SalaryPerDayInPkr;

   return 0;
}