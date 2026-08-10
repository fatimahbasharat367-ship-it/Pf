#include<iostream>
using namespace std;

int main() {
    float num1, num2, ans;
    cout << " Enter number 1 :";
    cin >> num1;

    cout << " Enter number 2 :";
    cin >> num2;

    char sign;
    cout << " Enter + , - , / , *  according to the calculation you want : ";
    cin >> sign;

    if(sign == '+'){
        ans = num1 + num2 ;
        cout << " The sum of two numbers is : " << ans;
    }else if ( sign == '-' ){
         ans = num1 - num2 ;
             cout << " The subtract of two numbers is : " << ans;   
    }else if ( sign == '*' ){
         ans = num1 * num2 ;
             cout << " The multiplication of two numbers is : " << ans;   
    }else if ( sign == '/' ){
         ans = num1 / num2 ;
             cout << " The division of two numbers is : " << ans;   
    }else{
        cout << " We don't perform calculation upon it.";
    }
   return 0;
}