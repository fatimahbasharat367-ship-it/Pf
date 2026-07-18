#include<iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    *p2 = *p3 - *p1;
    cout << *p1 << " " << *p2 << " " << *p3 << endl;
   return 0;
}