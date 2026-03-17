# include <iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    for( int i=1; i<=5; i=i+1)
    { 
        cout << i <<"Enter number :";
        cin >> number;
        sum = sum+number;
    }
  cout <<"The total sum is:"<<sum <<endl;
}