// #include <iostream>
// using namespace std;

// int main() {
//     int matrix[3][3];

//     cout << "Enter 9 numbers for 3x3 matrix:" << endl;
//     for(int i=0; i<3; i++) {
//         for(int j=0; j<3; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     cout << "Matrix is:" << endl;
//     for(int i=0; i<3; i++) {
//         for(int j=0; j<3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
#include<iostream>
using namespace std;
int main() {
    int num[4][4];
    cout << "Enter 16 elements : " << endl;

    for (int i = 0; i < 4 ; i ++ ){
        for (int j = 0 ; j < 4 ; j ++ )
        {
            cin >> num[i][j] ;
            
        }
    }
    cout << " The Table is : " << endl ;
       for (int i = 0; i < 4 ; i ++ ){
        for (int j = 0 ; j < 4 ; j ++ )
        {
            cout <<  num[i][j] << " ";
        }
        cout << endl;
    }

   return 0;
}
