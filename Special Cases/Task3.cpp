#include<iostream>
using namespace std;

int main() {
    int x = 5;
    int result ;
    result = 2 * x++ + 2 * x++;

    cout << "The Result is : " << result ;
   return 0;
}