#include <iostream>
using namespace std;

int main() {
    int marks[2][3];
    float sum=0;
    cout << "Enter marks of 2 students (3 subjects each):" << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> marks[i][j];
            sum += marks[i][j];
        }
    }
    cout << "Average = " << sum/6 << endl;
}
