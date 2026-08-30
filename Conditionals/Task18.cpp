#include<iostream>
using namespace std;

int main() {
    float percentage;
    float maths;
    cout << " Enter your number in maths : " ;
    cin >> maths;

     float calculus;
    cout << " Enter your number in calculus : " ;
    cin >> calculus;

     float programming;
    cout << " Enter your number in programming : " ;
    cin >> programming;

if (programming <= 40 || calculus <= 40 || maths <= 40) {
    cout << "You are Fail. Try Again next time." << endl;
} else {
    percentage = ((programming + calculus + maths) / 300.0) * 100;

    if (percentage >= 80) {
        cout << "You got A Grade.";
    } else if (percentage >= 60) {
        cout << "You got B Grade.";
    } else if (percentage >= 40) {
        cout << "You got C Grade.";
    } else {
        cout << "You got F Grade.";
    }
   
}
return 0;
}
