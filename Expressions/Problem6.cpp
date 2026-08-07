#include<iostream>
using namespace std;

int main() {
    string name;
    cout << " Enter student name :";
    getline(cin, name);

    float matric;
    cout << " Enter matric marks ( out of 1100 ): ";
    cin >> matric;

    float inter;
    cout << " Enter intermediate marks ( out of 1100 ):";
    cin >> inter;

    float ecat;
    cout << " Enter ECAT marks ( out of 400 ) :" ;
    cin >> ecat ;

    float agg;
    agg = (( matric /1100 ) * 0.10 + (inter / 1100 ) * 0.40 + ( ecat / 400 ) * 0.50 ) * 100;

    cout << " Aggregate score for " << name << " is : " << agg;





   return 0;
}