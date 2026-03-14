# include <iostream>
using namespace std;
int main(){
char value;
cout <<"Enter the value:";
cin >> value;
if(value=='a'||value=='e'||value=='i'||value=='o'||value=='u'){
 cout <<"It is a vowel.";
}
else{
cout<<"It is a consonant.";
}
if(value>='0' && value<= '9'){
cout <<"It is a number.";
}
}