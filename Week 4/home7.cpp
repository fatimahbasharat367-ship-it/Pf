#include<iostream>
using namespace std;
int main(){
    float res;
    int sides;
    string input;
    cout<<"Please enter the figure name: ";

    cin>>input;
    if(input=="square"){
        cout<<"enter side: ";
         cin>>sides;
        res=sides*sides;
    }
    else if(input=="rectangle"){
        float length;cout<<"Enter length: ";
        cin>>length;
        float width;cout<<"Enter width";
        cin>>width;
        res=length*width;
    }
    else if(input=="circle"){
        float rad;cout<<"Enter radius: ";
        cin>>rad;
        float pi=3.14;
        res=pi*rad*rad;

    }
    else if(input=="triangle"){
        float base;cout<<"enter base: ";
        cin>>base;
        float height;cout<<"enter height: ";
        cin>>height;
        res=0.5*base*height;
    }
      cout<<"Area of Shape is: "<<res;

}