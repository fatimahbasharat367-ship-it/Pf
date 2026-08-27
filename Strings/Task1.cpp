#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Write your name : ";
    getline(cin, name);   
    cout << "Your name is: " << name << endl;
    return 0;
}
