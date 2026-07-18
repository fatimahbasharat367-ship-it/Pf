#include<iostream>
using namespace std;

int main() {
    char cartoon[]="DORaemON";

    for(int i = 0; cartoon[i] != '\0'; i++){
    if(cartoon[i]>=65 && cartoon[i]<=90){
        cartoon[i]= cartoon[i]+32;
    }else{
        cartoon[i]=cartoon[i]-32;
    }
    }
    cout << cartoon;
   return 0;
}