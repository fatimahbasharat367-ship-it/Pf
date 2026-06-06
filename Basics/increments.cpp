#include<iostream>
using namespace std;

int main() {
    int x = 5;
    int result = 0;

    result = 2 * x++ + 2 * x++;

    /* if 2* x++ + 2* ++x;
    Ans will be 7 , 24;
    */

    /* if 2* ++x + 2* x++;
    Answer will be 7 , 26;
    */

    /* if 2* ++x + 2* ++x;
    Answer will be 7 , 28;
    */

    cout << x << " , " << result;
   return 0;
}