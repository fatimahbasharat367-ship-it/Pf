#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Please enter number: ";
    cin>>num;
    int num1;
    num1=num%10;
    string first, second;
    if(num1==0){second="zero";}
    if(num1==1){second="one";}
    if(num1==2){second="two";}
    if(num1==3){second="three";}
    if(num1==4){second="four";}
    if(num1==5){second="five";}
    if(num1==6){second="six";}
    if(num1==7){second="seven";}
    if(num1==8){second="eight";}
    if(num1==9){second="nine";}

    if(num==10){second="ten";}
    if(num==11){second="eleven";}
    if(num==12){second="twelve";}
    if(num==13){second="thirteen";}
    if(num==14){second="fourteen";}
    if(num==15){second="fifteen";}
    if(num==16){second="sixteen";}
    if(num==17){second="seventeen";}
    if(num==18){second="eighteen";}
    if(num==19){second="nineteen";}

    if(num>=20&&num<30){first="twenty";}
    if(num>=30&&num<40){first="thirty";}
    if(num>=40&&num<50){first="forty";}
    if(num>=50&&num<60){first="fifty";}
    if(num>=60&&num<70){first="sixty";}
    if(num>=70&&num<80){first="seventy";}
    if(num>=80&&num<90){first="eighty";}
    if(num>=90&&num<100){first="ninety";}

    if(num==100){first="hundered";}

    cout<<first<<" "<<second;
    

}