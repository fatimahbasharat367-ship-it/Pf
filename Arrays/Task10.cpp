#include <iostream>
using namespace std;

int main() {
    int marks[4];
    for(int i = 0; i < 4; i++) {
        cout << "Subject " << i + 1 << " ke marks enter karein: ";
        cin >> marks[i];
    }
     for(int i = 0; i < 4; i++) {
        cout << "Subject " << i + 1 << " ke marks : " << marks[i] << endl;
    }
    return 0;
}