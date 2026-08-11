#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age :";
    cin >> age;

    if(age <= 10 ){
        cout << "You are a child.";
    }else if(age >= 11 && age <= 19){
        cout << " You are a teenager.";
    }else{
        cout << "You are older than 20.";
    }
   return 0;
}