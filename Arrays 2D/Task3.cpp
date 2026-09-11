#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 9 elements : " << endl;

    for (int i = 0; i < 3 ; i ++ ){
        for (int j = 0 ; j < 3 ; j ++ )
        {
            cin >> matrix[i][j] ;
            
        }
    }

    for(int j=0; j<3; j++) {
        int sum = 0;
        for(int i=0; i<3; i++) {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j+1 << " = " << sum << endl;
    }
    return 0;
}
