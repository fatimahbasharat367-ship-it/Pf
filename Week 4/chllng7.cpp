# include <iostream>
using namespace std;
int main(){
    string shape;
 cout <<"Enter the shape:";
 cin >> shape;
if(shape=="square"){
    float side, Areas;
    cout<<"Enter the lenght of side."<<endl;
    cin >>side;
    Areas = side*side;
    cout <<"Area is =" << Areas;
}
if(shape=="rectangle"){
    float length, widhth, Arear;
    cout << "Enter the lenght of side."<< endl;
    cin >> length;
    cout << "Enter the widhth."<< endl;
    cin >> widhth;
    Arear = length*widhth;
    cout <<"Area is = " << Arear;
}
if (shape =="circle"){
    float pi, radius, Areac;
    cout<<"Enter the radius:"<< endl;
    cin >> radius;
    pi = 3.1416;
    Areac = pi*radius*radius;
    cout <<"Area is = "<<Areac;
}
if(shape=="triangle"){
    float base, height, Areat;
    cout<<"Enter the length of base:"<< endl;
    cin >> base;
    cout <<"Enter the length of height:" << endl;
    cin >> height;
    Areat = 1/2*( base * height);
    cout <<"Area is = " <<Areat;
}
}