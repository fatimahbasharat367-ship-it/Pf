# include <iostream>
using namespace std;
int main (){
int num;
cout <<"Enter the digits:";
cin >> num;
int num1 = num % 10;
string t1 = "", t2 = "";

if(num == 0){t1 = "zero";}
if(num1 == 1){t1 = "one";}
if(num1 == 2){t1 = "two";}
if(num1 == 3){t1 = "three";}
if(num1 == 4){t1 = "four";}
if(num1 == 5){t1 = "five";}
if(num1 == 6){t1 = "six";}
if(num1 == 7){t1 = "seven";}
if(num1 == 8){t1 = "eight";}
if(num1 == 9){t1 = "nine";}

if(num ==10){t1 = "Ten";}
if(num ==11){t1 ="Eleven";}
if(num ==12){t1 ="Twelve";}
if(num ==13){t1 ="Thirteen";}
if(num ==14){t1 ="Fourteen";}
if(num ==15){t1 ="Fifteen";}
if(num ==16){t1 ="Sixteen";}
if(num ==17){t1 ="Seventeen";}
if(num ==18){t1 ="Eighteen";}
if(num ==19){t1 ="Nineteen";}

if(num >=20){t2 ="Twenty";}
if(num >=30){t2 ="Thirty";}
if(num >=40){t2 ="Forty";}
if(num >=50){t2 ="Fifty";}
if(num >=60){t2 ="Sixty";}
if(num >=70){t2 ="Seventy";}
if(num >=80){t2 ="Eighty";}
if(num >=90){t2 ="Ninety";}

if(num ==100){t2 ="One Hundred";}

cout << t2 <<" " << t1 ;

}
