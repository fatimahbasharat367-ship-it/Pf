#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {2, 3, 4, 5};
    int product = 1;
    for(int i = 0; i < 4; i++) {
        product *= numbers[i]; 
    }
    cout << "Total Product: " << product;
    return 0;
}