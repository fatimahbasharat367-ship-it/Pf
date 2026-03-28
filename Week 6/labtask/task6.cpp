#include<iostream>
using namespace std;

int main() {
    int sum;
    float avg;
    int number[5]= {1, 2, 3, 4, 5};
    for(int i=0; i<=5; i=i+1){
    sum = sum + i;
    avg = sum/5;
    }

    cout << "The sum of natural numbers is :" << sum << endl;
    cout << "The average of natural numbers is :" << avg << endl;
   return 0;
}