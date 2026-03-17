#include<iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    for(int j = n; j > 0; j = j / 10) {
        count = count + 1;
    }

    cout << "Total Number of Digits: " << count;
    return 0;
}