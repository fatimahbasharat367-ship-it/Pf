# include <iostream>
using namespace std;
int main(){
 string name= " ";

 while(name !="END"){
    cout <<"Enter name:";
    cin >>name;
   if(name !="END"){ 
  cout <<"hello"<<" " <<name<<endl;
 }
}
cout <<"END"<<endl;
 return 0;
}