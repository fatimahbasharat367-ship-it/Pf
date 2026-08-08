#include<iostream>
using namespace std;

int main() {
    int lesseat;
    // less 200 calories daily from your diet;
    lesseat = 200;

    int hourwalk;
    // 1 hour walk will make you lose 300 calories;
    hourwalk = 300;

    int deficitcaloriesperday ;
    deficitcaloriesperday = lesseat + hourwalk;
    cout << " Your Daily calorie Deficit is : " << deficitcaloriesperday << endl;

    int calories;
    // As 1 kg = 7700; 
   //  so 12kg = 92400  
  // 12 * 7700 = 92400
    calories = (12 * 7700);

    int days;
    days = calories / deficitcaloriesperday;
    cout << " You will require " << days << " to lose 12 kg weight ";

   return 0;
}