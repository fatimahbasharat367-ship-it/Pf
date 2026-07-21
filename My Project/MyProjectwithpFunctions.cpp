#include <iostream>
#include <conio.h> 
using namespace std;

void header() //function;
{
    system("cls");
    cout << endl;
    cout << "================================================================" << endl;
    cout << "||                THE ADVENTURER'S COMPASS                    ||" << endl;
    cout << "||          - Life is  all  about  the adventures -           ||" << endl;
    cout << "================================================================" << endl;
}
// toorist ka funtion joh ky torist show kry;
void showTourists(string nameArray[], int ageArray[], string spotArray[], int index)
{
    cout << "Name\tAge\tSpot" << endl;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] != " ")
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
        if (nameArray[i] != " ")
        {
            cout << nameArray[i] << "\t"
                 << ageArray[i] << "\t"
                 << spotArray[i] << "\t"
                 << priceArray[i] << "\t"
                 << personArray[i] << "\t"
                 << durationArray[i] << endl;
        }
    }
}
// packages ks function;
void showPackages(string spotArray[], int priceArray[], string durationArray[], int ratingArray[], int index)
{
    cout << "Spot\tPrice\tDuration\tRating" << endl;
    for (int i = 0; i < index; i++)
    {
        cout << spotArray[i] << "\t"
             << priceArray[i] << "\t"
             << durationArray[i] << "\t"
             << ratingArray[i] << "/5" << endl;
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
        // agar record found;
        cout << "Name\tAge\tSpot\tPrice\tDuration" << endl;

        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t"
             << spotArray[foundindex] << "\t" << priceArray[foundindex] << "\t"
             << durationArray[foundindex] << endl;
    }
    else
    {
        cout << "Record not found." << endl;
    }
}
// tourist update krny ka function;
void updateTourist(string nameArray[], int ageArray[], string spotArray[], int priceArray[], string durationArray[], int index)
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
        cin >> nameArray[foundindex]; // new enteries at the spot (variable ki zrurt ni hoti)

        cout << "Enter new age: ";
        cin >> ageArray[foundindex];

        cout << "Enter new spot: ";
        cin >> spotArray[foundindex];

        cout << "Enter new price: ";
        cin >> priceArray[foundindex];

        cout << "Enter new duration: ";
        cin >> durationArray[foundindex];

        //updation of the code;
        cout << "Record Updated Successfully." << endl;
    }
    else
    {
        cout << "Record not found." << endl;
    }
}
// delete krny ka function ta ky tourist ko delete kr sken data sy;
void deleteTourist(string nameArray[], int ageArray[], string spotArray[],
  int priceArray[], string durationArray[], int personArray[], int index)
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
        // record delete ;
        cout << "Record Deleted Successfully." << endl;
    }
    else
    {
        // jab match record found na ho;
        cout << "Record not found." << endl;
    }
}
// sorting swapping kyt liye function;
 void sortRating(string nameArray[], string spotArray[],int priceArray[], 
string durationArray[], int ageArray[], int personArray[], int ratingArray[], int index)
{
    for (int i = 0; i < index - 1; i++)
    {
        for (int j = 0; j < index - i - 1; j++) // for storing in box;
        {
            //  bubble sorting yan swapping;
            if (ratingArray[j] < ratingArray[j + 1])
            {
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
            }
        }
    }
    // sortd;
    cout << "Sorted By Rating" << endl;
    cout << "Name\tRating\tSpot\tPrice" << endl;
    for (int i = 0; i < index; i++)
    {
        if (nameArray[i] != " ")
        {
            cout << nameArray[i] << "\t" << ratingArray[i] << "\t" << spotArray[i] << "\t" << priceArray[i] << endl;
        }
    }
}
// tourist portal functionn ;
void touristPortal(string nameArray[], string spotArray[], string activityArray[], int priceArray[],
        string durationArray[], int ageArray[],  int personArray[], int ratingArray[],   int &index)
{
    system("cls"); // for clearing the screen;
    cout << "Welcome to Tourist Portal" << endl;
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;
    cout << endl;

    // user ko available spots dikhani hain;
    cout << "------ Available Spots ------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". "
             << spotArray[i] << " (Rs." << priceArray[i] << ") Rating: " << ratingArray[i] << "/5" << endl;
    }
    string sspot;
    int person;
    bool found = false;

    cout << "Enter spot name from list: ";
    cin >> sspot;

    for (int i = 0; i < 5; i++)
    {
        if (sspot == spotArray[i])
        {
            found = true;

            cout << "How many individuals are joining you in this trip ? ";
            cin >> person;

            nameArray[index] = name; // assignment operator sy value dy di;
            ageArray[index] = age;
            spotArray[index] = sspot;
            personArray[index] = person;
            priceArray[index] = priceArray[i] * person; 
            durationArray[index] = durationArray[i];
            index++; // to avoid overwrite;
            cout << endl;

            cout << "Booking Successful!" << endl;
            
            // after suuccesful booking --> Raseeed ;
            cout << "------------ Receipt ------------" << endl;

            cout << "Name: " << name << endl;
            cout << "Destination: " << sspot << endl;
            cout << "Persons: " << person << endl;
            cout << "Duration: " << durationArray[index - 1] << endl;
            cout << "Total Bill: Rs." << priceArray[index - 1] << endl;

            for (int j = 0; j < 5; j++)
            {
                if (sspot == spotArray[j])
                {
                    cout << "Activity: " << activityArray[j] << endl;
                }
            }
            cout << "---------------------------------" << endl;
            // Raseed end ;
            break;
        }
    }
    if (found == false)
    {
        // upr di gyi spots sy hat kr choose krny pr;
        cout << "Spot not available." << endl;
    }
    cout << "Press any key...";
    getch();
}
int main()
{
    system("color 0B");

    int total_tourist = 1000; // total size;
    int index = 5; // hardcord values;

    string nameArray[1000] = {"Ayesha", "Fatimah", "Dua", "Alishba", "Zainab"};
    string spotArray[1000] = {"Chitral", "Hunza", "Kartarpur", "Sawat", "Kashmir"};
    string activityArray[1000] = {"Hunting", "Boating", "History_walk", "Hiking", "Sightseeing"};
    int priceArray[1000] = {15000, 20000, 12000, 10000, 17000};
    string durationArray[1000] = {"4days", "5days", "2days", "3days", "7days"};
    int ageArray[1000] = {25, 27, 19, 23, 32};
    int personArray[1000] = {3, 5, 2, 1, 4};
    int ratingArray[1000] = {5, 4, 3, 4, 5};

    while (true)
    {
        header(); // yahan hm ny call kiya ha header function ko;
        cout << "~ User Menu ~" << endl;
        cout << "1- Admin" << endl;
        cout << "2- Tourist" << endl;
        cout << "3- Exit" << endl;

        string userOption;
        cout << "Choose option: ";
        cin >> userOption;

        // ----------> Admin :

        if (userOption == "1")
        {
            int countattempt = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "------ Admin Login ------" << endl;
                cout << "Login Attempt : " << i + 1 << endl;

                string username;
                string password;

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
                        cout << "1- Show Tourists" << endl;
                        cout << "2- View Bookings" << endl;
                        cout << "3- View Packages" << endl;
                        cout << "4- Search Tourist" << endl;
                        cout << "5- Update Tourist" << endl;
                        cout << "6- Delete Tourist" << endl;
                        cout << "7- Sort By Rating" << endl;
                        cout << "8- Logout" << endl;

                        string adminOption;

                        cout << "Choose option: ";
                        cin >> adminOption;

                        if (adminOption == "1")
                        {
                            showTourists(nameArray, ageArray, spotArray, index);
                        }
                        else if (adminOption == "2")
                        {
                            showBookings(nameArray, ageArray, spotArray, priceArray, personArray, durationArray, index);
                        }
                        else if (adminOption == "3")
                        {
                            showPackages(spotArray, priceArray, durationArray, ratingArray, index);
                        }
                        else if (adminOption == "4")
                        {
                            searchTourist(nameArray, ageArray, spotArray, priceArray, durationArray, index);
                        }
                        else if (adminOption == "5")
                        {
                            updateTourist(nameArray, ageArray, spotArray, priceArray, durationArray, index);
                        }
                        else if (adminOption == "6")
                        {
                            deleteTourist(nameArray, ageArray, spotArray, priceArray, durationArray, personArray, index);
                        }
                        else if (adminOption == "7")
                        {
                            sortRating(nameArray, spotArray, priceArray, durationArray, ageArray, personArray, ratingArray, index);
                        }
                        else if (adminOption == "8")
                        {
                            break; // admin options sy bahir ;
                        }
                        else
                        {
                            //agr 1 - 8 ky ilawa kuch aur choose kren toh ;
                            cout << "Wrong Option." << endl;
                        }
                        cout << "Press any key...";
                        getch(); // get character;
                    }
                    break;
                }
                else
                {
                    // validation;
                    cout << "Invalid Username or Password." << endl;
                    countattempt++;
                    if (countattempt == 3)
                    {
                        cout << "Maximun Attempts Reached." << endl;
                    }
                    getch();
                }
            }
        }
        // ----------> Tourist :

        else if (userOption == "2")
        {
            touristPortal(nameArray, spotArray, activityArray, priceArray, durationArray, ageArray, personArray, ratingArray, index);
        }
        //  Exit
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            // validation;
            cout << "Wrong Option." << endl;
            getch();
        }
    }
    cout << "Thanks for visiting TMS" << endl;
}