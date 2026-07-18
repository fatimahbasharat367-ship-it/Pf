#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p1 = arr;
    int *p2 = &arr[3];

    cout << p2 - p1 << endl;
   return 0;
}