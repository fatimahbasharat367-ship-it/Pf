#include<iostream>
using namespace std;

int main() {
    int a=5;
    int b=10;

    if(true){
        int c = a + b;
        cout << "The sum is : " << c << endl;
    }
    { //dummy brackets;
        int d;
        if(a<10){
        d = a*b;
        }
        cout << "The Multiple is : " << d <<endl;
    }

    //declaration inside if statement;
    if(int e = b-a){
        cout << "The minus is : " << e <<endl;
    }
   return 0;
}