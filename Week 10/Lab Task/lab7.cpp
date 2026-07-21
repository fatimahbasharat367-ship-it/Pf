#include<iostream>
#include<cmath>
using namespace std;

float radian = 57.2958;
float height(float dis, float angle){
   float hght = dis * tan(angle/radian);
   return hght;
}

int main() {
    float tan;
    float distance;
    cout << " Enter the distance : " << endl;
    cin >> distance;
    
    float angle;
    cout << "Enter the angle : " << endl;
    cin >> angle;

    float total = height(distance, angle);
    cout << "The height of the tree is :" << total;
   return 0;
}