#include<iostream>
using namespace std;

int main() {
    char A[5] = {65, 66, 67 , 68, 69};

    for ( auto x : A ){
        cout << x << endl;
    }
   return 0;
}