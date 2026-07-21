#include<iostream>
using namespace std;

void searchWithName(string name)

int main() {
    
    --------------------[ 1 ]----------------------------

string tourist; 
cin >> tourist;
searchWithName(tourist); // Yahan parameter pass ho raha hai

   return 0;
}

// PARAMETARIZED FUnCTION;
// function joh ky parameter leta hai (string name) 
void searchWithName(string name) { 
    bool found = false;
    for (int i = 0; i < index; i++) {
        if (nameArray[i] == name) {
            cout << "Found: " << nameArray[i];
            found = true;
        }
    }
    if(!found) cout << "Not found";
}



    ------------------------ [ 2 ] ----------------------

// 2 input yaann parametre yaan arguments: price aur persons
void calculateTotalBill(int price, int persons) {
    int total = price * persons;
    cout << "Aap ka total bill hai: RS. " << total << endl;
}

int main() {
    int ticketPrice = 15000;
    int totalPeople = 3;
    // doo parametres;
    calculateTotalBill(ticketPrice, totalPeople); 
    
    return 0;
}



------------------------------- [ 3 ] ----------------------------------

void welcomeTourist(string touristName) {
    cout << "Welcome to The Adventurer's Compass, " << touristName << "!" << endl;
}

int main(){
string name = "Ayesha";
welcomeTourist(name); // "Ayesha" parameter ha hehehe;

return 0;
}


-------------------------------- [ 4 ] ------------------------------------------

// For INT:
int calculateTotalBill(int price, int persons) {
    int total = price * persons;
    return total; //value variable save;
}

int main() {

    int bill = calculateTotalBill(15000, 3); 
    cout << "Without Tax: " << bill;
}