#include<iostream>
using namespace std;

int main() {
    int A[5] = {2,4 ,6,8,10};
    int *p=A;

    cout << *p << endl;
    cout << p << endl;
    p++;
    cout << "After increment : " << *p << endl;
    p--;
    cout << "After decrement : " << *p << endl;
    cout << &p << endl;
    cout << &A;
   return 0;
}