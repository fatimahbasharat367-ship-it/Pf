#include<iostream>
using namespace std;

int main() {
    float veg_price;
    cout << " Enter the price of vegetable per kg in coins : ";
    cin >> veg_price;

    float fruit_price;
    cout << " Enter the price of Fruit per kg in coins : " ;
    cin >> fruit_price ;

    float veg_kg;
    cout << " How many Kg do you want to buy : " ;
    cin >> veg_kg;

     float fruit_kg;
    cout << " How many Kg do you want to buy : " ;
    cin >> fruit_kg;

    float total_veg_price;
    total_veg_price = veg_kg * veg_price ;
    cout << " The total price of vegetable you buy is : " << total_veg_price << endl ;

    float total_fruit_price;
    total_fruit_price = fruit_kg * fruit_price ;
    cout << " The total price of fruit you buy is : " << total_fruit_price << endl ;

    // As 1 Rs = 1.94 coins 
    float fruit_in_rs;
    fruit_in_rs = total_fruit_price / 1.94 ;
    cout << " The Fruit total earning in Rupee : " << fruit_in_rs << endl;

    float veg_in_rs;
    veg_in_rs = total_veg_price / 1.94 ;
    cout << " The Vegetable total earning in Rupee : " << veg_in_rs << endl;

    float total_earning;
    total_earning = fruit_in_rs + veg_in_rs ;
    cout << " The Total earning from the harvest is : " << total_earning ;

   return 0;
}