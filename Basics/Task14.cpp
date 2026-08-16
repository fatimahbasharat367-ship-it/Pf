#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Write Principal : ";
    cin >> principal;
    cout << "Write Rate: ";
    cin >> rate;
    cout << "Write Time: ";
    cin  >> time;

    float SI = (principal * rate * time) / 100;
    cout << "Simple Interest = " << SI;
    return 0;
}
