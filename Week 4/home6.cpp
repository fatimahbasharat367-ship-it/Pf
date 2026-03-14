# include <iostream>
using namespace std;
main (){
    float speed;
    cout << "Enter the Speed.";
    cin >> speed;
    if(speed<=10){
        cout <<"Slow.";
    }
    if(speed>10 && speed<=50){
        cout <<"Average.";
    }
    if(speed>50 && speed <=150){
        cout <<"Fast.";
    }
    if(speed>150 && speed <= 1000){
        "Ultra Fast.";
    }
    if(speed>1000){
        cout<<"Extremely Fast.";
    }
}