#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "What is your Purchase Amount : ";
    cin >> amount;

    int type;
    float Bill;

    if (amount >= 10000)
    {
        cout << "If you are Member, Enter ( 1 for Yes )( Enter 0 for No ) : ";
        cin >> type;
        if (type == 1)
        {
            Bill = amount - (amount * 0.20);
            cout << "Congratulations ! You got 20 % Discount" << endl;
            cout << "Your Total Bill : " << Bill << endl;
        }
        else
        {
            Bill = amount - (amount * 0.10);
            cout << "Congratulations ! You got 10 % Discount" << endl;
            cout << "Your Total Bill : " << Bill << endl;
        }
    }
    else{
            cout << "If you are Member, Enter ( 1 for Yes )( Enter 0 for No ) : ";
            cin >> type;
            if (type == 1) {
                Bill = amount - (amount * 0.05);
                cout << "Congratulations ! You got 5 % Discount" << endl;
                cout << "Your Total Bill is : " << Bill << endl;
            } else {
                cout << "Your Total  is : " << amount << " ";
            } return 0;
        }
}