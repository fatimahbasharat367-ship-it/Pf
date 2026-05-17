#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib> // For system() 
#include <fstream> // File handling mandatory header

using namespace std;

// Global variables so that they can be accessed in all functions
const int total_tourist = 1000;
int index = 5; // Default index 5, agar file khali ho to

string nameArray[total_tourist];
string spotArray[total_tourist];
string activityArray[total_tourist];
int priceArray[total_tourist];
string durationArray[total_tourist];
int ageArray[total_tourist];
int personArray[total_tourist];
int ratingArray[total_tourist];

// --- FILE HANDLING FUNCTIONS ---

void saveData() {
    ofstream outFile("tourists.txt");
    if (outFile.is_open()) {
        outFile << index << endl; // Total records
        for (int i = 0; i < index; i++) {
            // Agar koi record delete ho chuka ho ya khali ho, to safe name use karein
            if (nameArray[i] == "" || nameArray[i] == " ") {
                outFile << "Deleted_Record" << endl;
            } else {
                outFile << nameArray[i] << endl;
            }
            outFile << (spotArray[i] == "" || spotArray[i] == " " ? "None" : spotArray[i]) << endl;
            outFile << (activityArray[i] == "" || activityArray[i] == " " ? "None" : activityArray[i]) << endl;
            outFile << priceArray[i] << endl;
            outFile << (durationArray[i] == "" || durationArray[i] == " " ? "None" : durationArray[i]) << endl;
            outFile << ageArray[i] << endl;
            outFile << personArray[i] << endl;
            outFile << ratingArray[i] << endl;
        }
        outFile.close();
    }
}

void loadData() {
    ifstream inFile("tourists.txt");
    if (inFile.is_open()) {
        inFile >> index;
        inFile.ignore(); // Extra newline clear karne k liye
        for (int i = 0; i < index; i++) {
            getline(inFile, nameArray[i]);
            if (nameArray[i] == "Deleted_Record") nameArray[i] = " ";
            
            getline(inFile, spotArray[i]);
            getline(inFile, activityArray[i]);
            
            inFile >> priceArray[i];
            inFile.ignore();
            
            getline(inFile, durationArray[i]);
            
            inFile >> ageArray[i];
            inFile >> personArray[i];
            inFile >> ratingArray[i];
            inFile.ignore(); // Har loop k end pr newline handle krne k liye
        }
        inFile.close();
    } else {
        // First run k liye default data
        index = 5;
        string tempNames[] = {"Ayesha", "Fatimah", "Dua", "Alishba", "Zainab"};
        string tempSpots[] = {"Chitral", "Hunza", "Kartarpur", "Sawat", "Kashmir"};
        string tempActs[] = {"Hunting", "Boating", "History_walk", "Hiking", "Sightseeing"};
        int tempPrices[] = {15000, 20000, 12000, 10000, 17000};
        string tempDurs[] = {"4_days", "5_days", "2_days", "3_days", "7_days"};
        int tempAges[] = {25, 27, 19, 23, 32};
        int tempPers[] = {3, 5, 2, 1, 4};
        int tempRats[] = {5, 4, 3, 4, 5};

        for(int i = 0; i < 5; i++) {
            nameArray[i] = tempNames[i];
            spotArray[i] = tempSpots[i];
            activityArray[i] = tempActs[i];
            priceArray[i] = tempPrices[i];
            durationArray[i] = tempDurs[i];
            ageArray[i] = tempAges[i];
            personArray[i] = tempPers[i];
            ratingArray[i] = tempRats[i];
        }
    }
}

// Function to display the main header
void displayHeader() {
    system("cls"); // to clear the screen after choosing option
    cout << endl;
    cout << "================================================================" << endl;
    cout << "||                THE ADVENTURER'S COMPASS                    ||" << endl;
    cout << "||          - Life is  all  about  the adventures -           ||" << endl;
    cout << "================================================================" << endl;
}

// Function to display the main menu
string displayMainMenu() {
    displayHeader();
    cout << "~ User Menu ~" << endl;
    cout << "1-  Admin" << endl;
    cout << "2-  Tourist" << endl;
    cout << "3-  To Exit" << endl;
    
    cout << "Choose option : ";
    string userOption;
    cin >> userOption;
    cout << " You choose : " << userOption << endl;
    return userOption;
}

// Admin Operations
void showAllTourists() {
    cout << "Name\tage\tSpot" << endl;
    for (int i = 0; i < index; i = i + 1) {
        if (nameArray[i] != " " && nameArray[i] != "") {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << spotArray[i] << endl;
        }
    }
}

void viewAllBookings() {
    cout << "Name\tage\tSpot\tPrice\tPersons\tDuration" << endl;
    for (int i = 0; i < index; i = i + 1) {
        if (nameArray[i] != " " && nameArray[i] != "") {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << spotArray[i] << "\t" << priceArray[i] << "\t" << personArray[i] << "\t" << durationArray[i] << endl;
        }
    }
}

void viewAvailablePackages() {
    cout << "Spot\tPrice\tDuration" << endl;
    for (int j = 0; j < index; j++) {
        if (spotArray[j] != " " && spotArray[j] != "") {
            cout << spotArray[j] << "\t" << priceArray[j] << "\t" << durationArray[j] << endl;
        }
    }
}

void searchTourist() {
    cout << "Enter the name you want to search: ";
    string name;
    cin >> name;
    bool found = false;
    int foundindex = -1;
    
    for (int i = 0; i < index; i = i + 1) {
        if (nameArray[i] == name) {
            foundindex = i;
            found = true;
        }
    }
    
    if (found == false) {
        cout << "Record of this name not founded: " << name << endl;
    } else {
        cout << "Name\tage\tSpot\tPrice\tDuration" << endl;
        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << spotArray[foundindex] << "\t" << priceArray[foundindex] << "\t" << durationArray[foundindex] << endl;
    }
}

void updateTouristRecord() {
    cout << "Enter the name you want to update record of: ";
    string name;
    cin >> name;

    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i = i + 1) {
        if (nameArray[i] == name) {
            foundindex = i;
            found = true;
            break;
        }
    }
    
    if (found == true) {
        cout << "================= Old Record ================" << endl;
        cout << "Name\tage\tSpot\tPrice\tDuration" << endl;
        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << spotArray[foundindex] << "\t" << priceArray[foundindex] << "\t" << durationArray[foundindex] << endl;

        cout << "Enter new record for update " << endl;
        cout << "Enter the new name: ";
        string newName;
        cin >> newName;

        cout << "Enter the age: ";
        int age;
        cin >> age;

        cout << "Enter the spot you want to travel: ";
        string spot;
        cin >> spot;

        cout << "Enter the Price you wanna change: ";
        float price;
        cin >> price;

        cout << "Enter the days you want to update: ";
        string duration;
        cin >> duration;

        nameArray[foundindex] = newName;
        spotArray[foundindex] = spot;
        ageArray[foundindex] = age;
        priceArray[foundindex] = price;
        durationArray[foundindex] = duration;
        
        saveData(); // Changes file me save krne k liye
        cout << "\nRecord updated successfully!" << endl;
    } else {
        cout << "Record not found" << endl;
    }
}

void deleteTouristRecord() {
    cout << "Enter the name you want to delete record of: ";
    string name;
    cin >> name;

    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i = i + 1) {
        if (nameArray[i] == name) {
            foundindex = i;
            found = true;
            break;
        }
    }
    
    if (found == true) {
        nameArray[foundindex] = " ";
        spotArray[foundindex] = " ";
        ageArray[foundindex] = 0;
        priceArray[foundindex] = 0;
        durationArray[foundindex] = "";
        personArray[foundindex] = 0;
        ratingArray[foundindex] = 0;
        
        saveData(); // Changes file me save krne k liye
        cout << "Record of " << name << " Deleted " << endl;
    } else {
        cout << "Record not found " << endl;
    }
}

void sortByPopularity() {
    for (int i = 0; i < index - 1; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (ratingArray[j] < ratingArray[j + 1]) {
                int tempRating = ratingArray[j];
                ratingArray[j] = ratingArray[j + 1];
                ratingArray[j + 1] = tempRating;

                string tempName = nameArray[j];
                nameArray[j] = nameArray[j + 1];
                nameArray[j + 1] = tempName;

                string tempSpot = spotArray[j];
                spotArray[j] = spotArray[j + 1];
                spotArray[j + 1] = tempSpot;

                int tempPrice = priceArray[j];
                priceArray[j] = priceArray[j + 1];
                priceArray[j + 1] = tempPrice;

                int tempAge = ageArray[j];
                ageArray[j] = ageArray[j + 1];
                ageArray[j + 1] = tempAge;

                string tempDuration = durationArray[j];
                durationArray[j] = durationArray[j + 1];
                durationArray[j + 1] = tempDuration;

                int tempPersons = personArray[j];
                personArray[j] = personArray[j + 1];
                personArray[j + 1] = tempPersons;
                
                string tempAct = activityArray[j];
                activityArray[j] = activityArray[j + 1];
                activityArray[j + 1] = tempAct;
            }
        }
    }

    saveData(); // Sorting orders ko file me update krne k liye
    cout << "The Records sorted by Highest Rating!" << endl;
    cout << "Name\tRating\tSpot\tPrice" << endl;
    cout << "------------------------------------" << endl;
    for (int i = 0; i < index; i++) {
        if (nameArray[i] != " " && nameArray[i] != "") {
            cout << nameArray[i] << "\t" << ratingArray[i] << "\t" << spotArray[i] << "\t" << priceArray[i] << endl;
        }
    }
}

void adminMenu() {
    while (true) {
        system("cls");
        cout << "--------Admin Menu-----------" << endl;
        cout << " 1- Show all the tourists list. " << endl;
        cout << " 2- View all Bookings." << endl;
        cout << " 3- View all available packages. " << endl;
        cout << " 4- Search Tourists. " << endl;
        cout << " 5- Update Tourist record. " << endl;
        cout << " 6- Delete the record  by name. " << endl;
        cout << " 7- Sort by Popularity(Rating). " << endl;
        cout << " 8- Log Out." << endl;

        cout << " Choose an option : " << endl;
        string adminOption;
        cin >> adminOption;
        
        if (adminOption == "1") {
            showAllTourists();
        } else if (adminOption == "2") {
            viewAllBookings();
        } else if (adminOption == "3") {
            viewAvailablePackages();
        } else if (adminOption == "4") {
            searchTourist();
        } else if (adminOption == "5") {
            updateTouristRecord();
        } else if (adminOption == "6") {
            deleteTouristRecord();
        } else if (adminOption == "7") {
            sortByPopularity();
        } else if (adminOption == "8") {
            break; 
        } else {
            cout << "Wrong Option selected" << endl;
        }
        cout << "Press any key to continue...";
        getch();
    }
}

void adminLogin() {
    int countattempt = 0;
    for (int i = 0; i < 3; i++) {
        system("cls");
        cout << "-- Admin Menu --" << endl;
        cout << " Login Attempt : " << i + 1 << endl;

        cout << "Enter the username: ";
        string username;
        cin >> username;

        cout << "Enter Password: ";
        string password;
        cin >> password;
        
        if (username == "Fama" && password == "2578") {
            cout << "Logged in Successfully" << endl;
            cout << "Press any key to continue... ";
            getch();
            adminMenu();
            break;
        } else {
            cout << "Username or Password is invalid" << endl;
        }
        cout << "Press any key to continue... ";
        getch();
    }
}

// Tourist Portal Functions
void touristPortal() {
    system("cls");
    cout << "Welcome to Tourist Portal" << endl;
    cout << "---Tourist Menu---" << endl;

    cout << "Enter your name: ";
    string name;
    cin >> name;

    cout << "Enter your age: ";
    int age;
    cin >> age;

    int person = 0;
    string sspot = "";
    bool found = false;

    cout << "\n ------Available Spots-----" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << " . " << spotArray[i] << " (Rs. " << priceArray[i] << ") [Rating : " << ratingArray[i] << "/5 ]" << endl;
        if (ratingArray[i] == 5) {
            cout << " ---->> TOP RATED <<---- " << endl;
        }
        cout << endl;
    }

    while (true) {
        cout << "Enter the spot you want to travel from the list." << endl;
        cout << "---> ";
        cin >> sspot;
        
        for (int i = 0; i < 5; i++) {
            if (sspot == spotArray[i]) {
                found = true;
                cout << "How many individuals are travelling ? ";
                cin >> person;

                nameArray[index] = name;
                spotArray[index] = sspot;
                ageArray[index] = age;
                personArray[index] = person;
                priceArray[index] = priceArray[i] * person;
                durationArray[index] = durationArray[i];
                ratingArray[index] = ratingArray[i]; // Matching dynamic rating
                index++;
                break;
            }
        }
        if (found) {
            cout << " Congratulations your booking is successful." << endl;
            cout << "You Booked for " << sspot << "!" << endl;
            saveData(); // Nayi booking file me save krne k liye
            break;
        } else {
            cout << " We are not offering tour for " << sspot << "." << endl;
            cout << "Try Again." << endl;
        }
    }

    if (found) {
        system("cls");
        cout << "************************************************************" << endl;
        cout << "                     THE ADVENTURE COMPASS                  " << endl;
        cout << "                        Booking Receipt                     " << endl;
        cout << "************************************************************" << endl;
        cout << " Name : " << name << endl;
        cout << " Destination : " << sspot << endl;

        for (int j = 0; j < 5; j++) {
            if (sspot == spotArray[j]) {
                cout << "Activity : " << activityArray[j] << endl;
            }
        }
        cout << "Total Persons : " << person << endl;
        cout << "Total Bill : RS. " << priceArray[index - 1] << endl;
        cout << "************************************************************" << endl;

        cout << "   Congratulations! Your booking is successful. " << endl;
    }

    cout << "Press any key to continue .... : ";
    getch();
}

// Main Function
int main() {
    system("color 0B");
    loadData(); // Program start hotay sath hi file se sara purana data uthaye ga

    while (true) {
        string userOption = displayMainMenu();

        if (userOption == "1") {
            adminLogin();
        } 
        else if (userOption == "2") {
            touristPortal();
        } 
        else if (userOption == "3") {
            break;
        } 
        else {
            cout << "You entered wrong option " << endl;
            cout << "Press any key to proceed further. ";
            getch();
        }
    }

    cout << "Thanks for visiting TMS" << endl;
    return 0;
}