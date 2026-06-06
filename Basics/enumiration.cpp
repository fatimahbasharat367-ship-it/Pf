#include<iostream>
using namespace std;

enum days{mon=1, tue, wed, thurs, fri, sat, sun};
enum dep{cs, it, ee, medical};

int main() {
    days d;
    d = fri;

    //for getting charactedr input;
   //d = static_cast<days>(input);

    cout <<"The Monday is at : " << mon <<endl;
    cout <<"The Tuesday is at : " << tue <<endl;
    cout <<"The Wednesday is at : " << wed <<endl;
    cout <<"The Thursday is at : " << thurs <<endl;
    cout <<"The Friday is at : " << fri <<endl;
    cout <<"The Saturday is at : " << sat <<endl;
    cout <<"The Sunday is at : " << sun <<endl;
   return 0;
}