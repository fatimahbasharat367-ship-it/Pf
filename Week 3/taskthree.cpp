# include <iostream>
using namespace std;
main ()
{
int frame, min, fps;
cout << "Enter mins: ";
cin >> min;
cout << "Enter fps: ";
cin >>fps;
frame=min*fps*60;
cout<<"Total number of frames; "<<frame;
}