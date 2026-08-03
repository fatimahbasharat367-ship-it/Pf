#include<iostream>
using namespace std;

int main() {
    int kg; int gram;
    cout << " Enter the number in kilogram :";
    cin  >> kg;

    gram = kg * 1000;
    cout << "The number you enter in kg is equal to :" << gram << "grams";
   return 0;
}