#include <iostream>
using namespace std;

int main() {
    int arr[7];
    cout << " Enter 7 numbers : ";
   for (int i = 0; i < 7; i ++) {
        cin >> arr[i];
    }

    cout << "You entered :";
    for(int i = 0; i < 7; i++){
    cout << arr[i] << " ";
    }
    return 0;
}