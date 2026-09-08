#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Number : ";
    cin >> num;

    if (num % 2 == 0 ) {
        goto evenLabel;  
    }

    cout << "The Number is Odd." << endl;
    goto end;  

evenLabel:
    cout << "The Number is Even." << endl;

end:
    return 0;
}
