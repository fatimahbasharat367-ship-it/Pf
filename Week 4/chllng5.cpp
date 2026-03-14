# include <iostream>
using namespace std;
int main(){
string name1, name2, name3;
cout <<"Enter the name of 1st brother:";
cin >> name1;
cout <<"Enter the name of 2nd brother:";
cin >> name2;
cout <<"Enter the name of 3rd brother:";
cin >> name3;
int age1, age2, age3;
cout <<"Enter age of 1st brother:";
cin >> age1;
cout <<"Enter age of 2nd brother:";
cin >> age2;
cout <<"Enter age of 3rd brother:";
cin >> age3;
if(age1<age2 && age1 < age3 ){
    cout << name1 << "is the youngest.";
}
}