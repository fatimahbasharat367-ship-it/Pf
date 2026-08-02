#include <iostream>
using namespace std;

int main()
{
    // distance;
    float distance;
    cout << " Enter the distance covered by the vehicle :";
    cin >> distance;

    // time;
    float time;
    cout << "Enter time the vehicle take to cover " << distance << " distance: ";
    cin >> time;

    // speed
    float speed;
    speed = distance / time;
    cout << "The speed of the vehile is :" << speed;

    return 0;
}