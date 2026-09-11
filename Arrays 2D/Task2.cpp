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


    for(int i=0; i<3; i++) {
        int sum = 0;
        for(int j=0; j<3; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i+1 << " = " << sum << endl;
    }
    return 0;
}
