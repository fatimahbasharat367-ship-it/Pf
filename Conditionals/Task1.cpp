#include<iostream>
using namespace std;

int main() {
    int choice ;
    cout << " Enter your choice from following :" << endl;
    cout << " 1) Ice cream " << endl;
    cout << " 2) Chocolate " << endl;
    cout << " 3) Strawberry Milk " << endl;
    cin >> choice ;

    if(choice == 1){
        cout << " Ice cream is of Rs. 450/-";
    }else if ( choice == 2){
        cout << " Chocolate is of Rs. 500/-";
    }else if (choice == 3){
        cout << " Strawberry Milk is of Rs. 1500/-";
    }else{
        cout << " We are not available with this item.";
    }
   return 0;
}