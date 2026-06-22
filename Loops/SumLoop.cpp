#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the numbers you want to add : ";
    cin >> n;
    int sum = 0;

    for(int i = 0; i <= n; i++){
    sum = sum + i;
    }

    cout << " The sum of the " << n << " numbers is : " << sum ;
    
   return 0;
}