/*Nme : Fatimah Basharat 
Department : Computer Science 
Section : B
Roll Number : 2026(S)CS-113
--------------THE ADVENTURERE'S COMPASS----------
This project is a C++ based Tourist Management System 
designed to handle booking operations, data persistence,
and administrative controls seamlessly. It features core
functionalities like record management, interactive user/admin portals,
and a rating-based sorting mechanism to enhance user experience. 
The system effectively utilizes file handling to ensure reliable data storage, 
making it a robust solution for managing travel-related operations."*/


#include <iostream>
#include <conio.h>
#include <fstream> // File handling ke liye
using namespace std;

// File mein sirf Tourists ka data save karne ka function;
void saveData(string nameArray[], int ageArray[], string spotArray[], int priceArray[], int personArray[], string durationArray[], int ratingArray[], int index)
{
    ofstream file("data.txt");
    if (file.is_open())
    {
        // Pehle 5 default records ko hamesha pehle write karenge taaky packages kharab na hon;
        for (int i = 0; i < index; i++)
        {
            if (nameArray[i] != " " && nameArray[i] != "")
            {
                file << nameArray[i] << " " << ageArray[i] << " " << spotArray[i] << " "
                     << priceArray[i] << " " << personArray[i] << " " << durationArray[i] << " " << ratingArray[i] << endl;
            }
        }
        file.close();
    }
}

// File se data load karne ka function;
void loadData(string nameArray[], int ageArray[], string spotArray[], int priceArray[], int personArray[], string durationArray[], int ratingArray[], int &index)
{
    ifstream file("data.txt");
    if (file.is_open())
    {
        index = 0;
        while (file >> nameArray[index] >> ageArray[index] >> spotArray[index] >> priceArray[index] >> personArray[index] >> durationArray[index] >> ratingArray[index])
        {
            index++;
        }
        file.close();
    }
}

void header() // function;
{
    system("cls");
    cout << endl;
    cout << "================================================================" << endl;
    cout << "||                THE ADVENTURER'S COMPASS                    ||" << endl;
    cout << "||          - Life is  all  about  the adventures -           ||" << endl;
    cout << "================================================================" << endl;
}

// tourist show karne ka function
void showTourists(string nameArray[], int ageArray[], string spotArray[], int index)
{
    cout << "Name\tAge\tSpot" << endl;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] != " " && nameArray[i] != "")
        {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << spotArray[i] << endl;
        }
    }
}

// booking ka function;
void showBookings(string nameArray[], int ageArray[], string spotArray[],
 int priceArray[], int personArray[], string durationArray[], int index)
{
    cout << "Name\tAge\tSpot\tPrice\tPersons\tDuration" << endl;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] != " " && nameArray[i] != "")
        {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << spotArray[i] << "\t"
            << priceArray[i] << "\t" << personArray[i] << "\t" << durationArray[i] << endl;
        }
    }
}

// packages ka function (Hamesha original default spots hi dikhayega)
void showPackages(string spotArray[], int priceArray[], string durationArray[], int ratingArray[], int index)
{
    // Default fixed packages array taaky ye sorting se kharab na hon
    string defaultSpots[5] = {"Chitral", "Hunza", "Kartarpur", "Sawat", "Kashmir"};
    int defaultPrices[5] = {15000, 20000, 12000, 10000, 17000};
    string defaultDurations[5] = {"4days", "5days", "2days", "3days", "7days"};
    int defaultRatings[5] = {5, 4, 3, 4, 5};

    cout << "Spot\tPrice\tDuration\tRating" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << defaultSpots[i] << "\t" << defaultPrices[i] << "\t"
        << defaultDurations[i] << "\t" << defaultRatings[i] << "/5" << endl;
    }
}

// tourist searching function;
void searchTourist(string nameArray[], int ageArray[], string spotArray[], int priceArray[], string durationArray[], int index)
{
    string name;
    cout << "Enter name to search: ";
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] == name)
        {
            found = true;
            foundindex = i;
            break;
        }
    }
    if (found == true)
    {
        cout << "Name\tAge\tSpot\tPrice\tDuration" << endl;
        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << spotArray[foundindex] 
             << "\t" << priceArray[foundindex] << "\t" << durationArray[foundindex] << endl;
    }
    else
    {
        cout << "Record not found." << endl;
    }
}

// tourist update krny ka function;
void updateTourist(string nameArray[], int ageArray[], string spotArray[], int priceArray[], string durationArray[], int personArray[], int ratingArray[], int index)
{
    string name;
    cout << "Enter name to update: ";
    cin >> name;
    bool found = false;
    int foundindex = -1;

    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] == name)
        {
            found = true;
            foundindex = i;
            break;
        }
    }
    if (found == true)
    {
        cout << "Enter new name: ";
        cin >> nameArray[foundindex];

        cout << "Enter new age: ";
        cin >> ageArray[foundindex];

        cout << "Enter new spot: ";
        cin >> spotArray[foundindex];

        cout << "Enter new price: ";
        cin >> priceArray[foundindex];

        cout << "Enter new duration: ";
        cin >> durationArray[foundindex];

        saveData(nameArray, ageArray, spotArray, priceArray, personArray, durationArray, ratingArray, index);
        cout << "Record Updated Successfully." << endl;
    }
    else
    {
        cout << "Record not found." << endl;
    }
}

// delete krny ka function ta ky tourist ko delete kr sken data sy;
void deleteTourist(string nameArray[], int ageArray[], string spotArray[],
                   int priceArray[], string durationArray[], int personArray[], int ratingArray[], int index)
{
    string name;
    cout << "Enter the name you want to delete: ";
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] == name)
        {
            found = true;
            foundindex = i;
            break;
        }
    }
    if (found == true)
    {
        nameArray[foundindex] = " ";
        spotArray[foundindex] = " ";
        ageArray[foundindex] = 0;
        priceArray[foundindex] = 0;
        durationArray[foundindex] = "";
        personArray[foundindex] = 0;

        saveData(nameArray, ageArray, spotArray, priceArray, personArray, durationArray, ratingArray, index);
        cout << "Record Deleted Successfully." << endl;
    }
    else
    {
        cout << "Record not found." << endl;
    }
}

// sorting swapping kyt liye function;
void sortRating(string nameArray[], string spotArray[], int priceArray[], string durationArray[], int ageArray[], int personArray[], int ratingArray[], int index)
{
    for (int i = 0; i < index - 1; i++)
    {
        for (int j = 0; j < index - i - 1; j++)
        {
            if (ratingArray[j] < ratingArray[j + 1])
            {
                swap(ratingArray[j], ratingArray[j + 1]);
                swap(nameArray[j], nameArray[j + 1]);
                swap(spotArray[j], spotArray[j + 1]);
                swap(priceArray[j], priceArray[j + 1]);
                swap(ageArray[j], ageArray[j + 1]);
                swap(durationArray[j], durationArray[j + 1]);
                swap(personArray[j], personArray[j + 1]);
            }
        }
    }
    cout << "Sorted By Rating" << endl;
    cout << "Name\tRating\tSpot\tPrice" << endl;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] != " " && nameArray[i] != "")
        {
            cout << nameArray[i] << "\t" << ratingArray[i] << "\t" << spotArray[i] << "\t" << priceArray[i] << endl;
        }
    }
}

// tourist portal functionn ;
void touristPortal(string nameArray[], string spotArray[], string activityArray[], int priceArray[],
                   string durationArray[], int ageArray[], int personArray[], int ratingArray[], int &index)
{
    system("cls");
    cout << "Welcome to Tourist Portal" << endl;
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;
    cout << endl;

    // Default Fixed Spots array display ke liye taaky hamesha sahi spots show hon
    string defaultSpots[5] = {"Chitral", "Hunza", "Kartarpur", "Sawat", "Kashmir"};
    int defaultPrices[5] = {15000, 20000, 12000, 10000, 17000};
    int defaultRatings[5] = {5, 4, 3, 4, 5};
    string defaultDurations[5] = {"4days", "5days", "2days", "3days", "7days"};

    cout << "------ Available Spots ------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << defaultSpots[i] << " (Rs." << defaultPrices[i] << ") Rating: " << defaultRatings[i] << "/5" << endl;
    }

    string sspot;
    int person;
    bool found = false;

    cout << "Enter spot name from list: ";
    cin >> sspot;

    for (int i = 0; i < 5; i++)
    {
        if (sspot == defaultSpots[i])
        {
            found = true;

            cout << "How many individuals are joining you in this trip ? ";
            cin >> person;

            nameArray[index] = name;
            ageArray[index] = age;
            spotArray[index] = sspot;
            personArray[index] = person;
            priceArray[index] = defaultPrices[i] * person;
            durationArray[index] = defaultDurations[i];
            ratingArray[index] = defaultRatings[i];
            index++;

            saveData(nameArray, ageArray, spotArray, priceArray, personArray, durationArray, ratingArray, index);
            cout << endl;

            cout << "Booking Successful!" << endl;
            cout << "------------ Receipt ------------" << endl;
            cout << "Name: " << name << endl;
            cout << "Destination: " << sspot << endl;
            cout << "Persons: " << person << endl;
            cout << "Duration: " << durationArray[index - 1] << endl;
            cout << "Total Bill: Rs." << priceArray[index - 1] << endl;

            if (sspot == "Chitral")
                cout << "Activity: Hunting" << endl;
            else if (sspot == "Hunza")
                cout << "Activity: Boating" << endl;
            else if (sspot == "Kartarpur")
                cout << "Activity: History_walk" << endl;
            else if (sspot == "Sawat")
                cout << "Activity: Hiking" << endl;
            else if (sspot == "Kashmir")
                cout << "Activity: Sightseeing" << endl;

            cout << "---------------------------------" << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "Spot not available." << endl;
    }
    cout << "Press any key...";
    getch();
}

int main()
{
    system("color 0B");

    int index = 5;

    string nameArray[1000] = {"Ayesha", "Fatimah", "Dua", "Alishba", "Zainab"};
    string spotArray[1000] = {"Chitral", "Hunza", "Kartarpur", "Sawat", "Kashmir"};
    string activityArray[1000] = {"Hunting", "Boating", "History_walk", "Hiking", "Sightseeing"};
    int priceArray[1000] = {15000, 20000, 12000, 10000, 17000};
    string durationArray[1000] = {"4days", "5days", "2days", "3days", "7days"};
    int ageArray[1000] = {25, 27, 19, 23, 32};
    int personArray[1000] = {3, 5, 2, 1, 4};
    int ratingArray[1000] = {5, 4, 3, 4, 5};

    // Pehle se save shuda file data ko load karna
    loadData(nameArray, ageArray, spotArray, priceArray, personArray, durationArray, ratingArray, index);

    while (true)
    {
        header();
        cout << "~ User Menu ~" << endl;
        cout << "1- Admin" << endl;
        cout << "2- Tourist" << endl;
        cout << "3- Exit" << endl;

        string userOption;
        cout << "Choose option: ";
        cin >> userOption;

        if (userOption == "1")
        {
            int countattempt = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "------ Admin Login ------" << endl;
                cout << "Login Attempt : " << i + 1 << endl;

                string username, password;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;

                if (username == "Fama" && password == "2578")
                {
                    while (true)
                    {
                        system("cls");
                        cout << "------ Admin Menu ------" << endl;
                        cout << "1- Show Tourists\n2- View Bookings\n3- View Packages\n4- Search Tourist\n5- Update Tourist\n6- Delete Tourist\n7- Sort By Rating\n8- Logout" << endl;

                        string adminOption;
                        cout << "Choose option: ";
                        cin >> adminOption;

                        if (adminOption == "1")
                            showTourists(nameArray, ageArray, spotArray, index);
                        else if (adminOption == "2")
                            showBookings(nameArray, ageArray, spotArray, priceArray, personArray, durationArray, index);
                        else if (adminOption == "3")
                            showPackages(spotArray, priceArray, durationArray, ratingArray, index);
                        else if (adminOption == "4")
                            searchTourist(nameArray, ageArray, spotArray, priceArray, durationArray, index);
                        else if (adminOption == "5")
                            updateTourist(nameArray, ageArray, spotArray, priceArray, durationArray, personArray, ratingArray, index);
                        else if (adminOption == "6")
                            deleteTourist(nameArray, ageArray, spotArray, priceArray, durationArray, personArray, ratingArray, index);
                        else if (adminOption == "7")
                            sortRating(nameArray, spotArray, priceArray, durationArray, ageArray, personArray, ratingArray, index);
                        else if (adminOption == "8")
                            break;
                        else
                            cout << "Wrong Option." << endl;

                        cout << "Press any key...";
                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Invalid Username or Password." << endl;
                    countattempt++;
                    if (countattempt == 3)
                        cout << "Maximum Attempts Reached." << endl;
                    getch();
                }
            }
        }
        else if (userOption == "2")
        {
            touristPortal(nameArray, spotArray, activityArray, priceArray, durationArray, ageArray, personArray, ratingArray, index);
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "Wrong Option." << endl;
            getch();
        }
    }
    cout << "Thanks for visiting TMS" << endl;
    return 0;
}