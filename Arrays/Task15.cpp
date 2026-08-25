#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    cout << "Enter 4x4 matrix:" << endl;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin >> a[i][j];

    cout << "Diagonal elements:" << endl;
    for(int i=0;i<4;i++)
        cout << a[i][i] << " ";
}
