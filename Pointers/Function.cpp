#include<iostream>
using namespace std;

void display(){

    cout << "HI CUTIE";

}
int main() {
  void (*fp)();
  fp = display;
  (*fp)(); 
   return 0;
}