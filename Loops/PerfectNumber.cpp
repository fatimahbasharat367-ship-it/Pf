#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number you want to get the factor of : ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        if(n%i==0){
            cout << " " << i << " ";
              sum += i;
    
        }
    }
                cout << "The perfect number is : " << sum;
   return 0;
}