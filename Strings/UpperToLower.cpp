#include<iostream>
using namespace std;

int main() {
    /*char cartoon[]="DORAEMON";

    for(int i = 0; cartoon[i] != '\0'; i++){
     cartoon[i]= cartoon[i]+32;
    }
    cout << cartoon;*/

    char cartoon[]="rocket";

    for(int i = 0; cartoon[i] != '\0'; i++){
     cartoon[i]= cartoon[i]-32;
    }
    cout << cartoon;
   return 0;
}