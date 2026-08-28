#include <iostream>
using namespace std;

int main() {
    int numbers[]{1, 2, 3, 4, 5};   
    cout << "Array elements: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    return 0;
}
