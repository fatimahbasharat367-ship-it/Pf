#include <iostream>
using namespace std;

int main() {
    int i = 1;

startLoop:
    if (i <= 5) {
        cout << "i = " << i << endl;
        i++;
        goto startLoop;  
    }

    cout << "Loop finished!" << endl;
    return 0;
}
