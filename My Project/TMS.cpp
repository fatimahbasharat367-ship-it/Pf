#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   system("color 0B"); // for color;
   // total size;
   // memory or can say boxes in which memory can be stored;
   int total_tourist = 1000;
   int index = 5;

   // Data Structures, Parallel Arrays;
   string nameArray[total_tourist] = {"Ayesha", "Fatimah", "Dua", "Alishba", "Zainab"};
   string spotArray[total_tourist] = {"Chitral", "Hunza", "Kartarpur", "Sawat", "Kashmir"};
   string activityArray[total_tourist] = {"Hunting", "Boating", "History_walk", "Hiking", "Sightseeing"};
   int priceArray[total_tourist] = {15000, 20000, 12000, 10000, 17000};
   string durationArray[total_tourist] = {"4 days", "5 days", "2 days", "3 days", "7 days"};
   int ageArray[total_tourist] = {25, 27, 19, 23, 32};
   int personArray[total_tourist] = {3, 5, 2, 1, 4};
   int ratingArray[total_tourist] = {5, 4, 3, 4, 5};

   // CRUD Create, Read, Update, Delete;
   while (true)
   // this helps the program to continue until we enter break (will not let the code to end)
   {

      // main header of TMS ;
      system("cls"); // to clear the screen after choosing option;
      cout << endl;
      cout << "================================================================" << endl;
      cout << "||                THE ADVENTURER'S COMPASS                    ||" << endl;
      cout << "||          - Life is  all  about  the adventures -           ||" << endl;
      cout << "================================================================" << endl;

      // main menu
      cout << "~ User Menu ~" << endl;
      cout << "1-" << " " << " Admin" << endl;
      cout << "2-" << " " << " Tourist " << endl;
      cout << "3-" << " " << " To Exit" << endl;

      // option choosing by user whether 1, 2 or 3 to proceed futher;
      cout << "Choose option :" << " ";
      string userOption; // to avoid crashes we use string;
      cin >> userOption;
      cout << " You choose :" << " " << userOption << endl;

      if (userOption == "1")
      {
         // code for Admin to be selected;
         int countattempt = 0;
         for (int i = 0; i < 3; i++)
         {
            system("cls");

            // showing how many times admin attempted;
            cout << "-- Admin Menu --" << endl;
            cout << " Login Attempt : " << i + 1 << endl;

            cout << "Enter the username: ";
            string username;
            cin >> username;

            cout << "Enter Password: ";
            string password;
            cin >> password;
            // username and password for the admin  to be selected;
            if (username == "Fama" && password == "2578")
            {
               cout << "Logged in Successfully" << endl;

               while (true)
               {
                  system("cls"); // for clear;
                  //  menu for the admin to select;
                  cout << "--------Admin Menu-----------" << endl;
                  cout << " 1- Show all the tourists list. " << endl;
                  cout << " 2- View all Bookings." << endl;
                  cout << " 3- View all available packages. " << endl;
                  cout << " 4- Search Tourists. " << endl;
                  cout << " 5- Update Tourist record. " << endl;
                  cout << " 6- Delete the record  by name. " << endl;
                  cout << " 7- Sort by Popularity(Rating). " << endl;
                  cout << " 8- Log Out." << endl;

                  // options selected by admin;
                  cout << " Choose an option : " << endl;
                  string adminOption;
                  cin >> adminOption;
                  if (adminOption == "1")
                  {
                     // tourist record;
                     cout << "Name\tage\tSpot" << endl;
                     for (int i = 0; i < index; i = i + 1)
                     {
                        if (nameArray[i] != " ")
                        {

                           cout << nameArray[i] << "\t" << ageArray[i] << "\t" << spotArray[i] << endl;
                        }
                     }
                  }
                  else if (adminOption == "2")
                  {
                     // all boookings;
                     cout << "Name\tage\tSpot\tPrice\tPersons\tDuration" << endl;
                     for (int i = 0; i < index; i = i + 1)
                     {
                        cout << nameArray[i] << "\t" << ageArray[i] << "\t" << spotArray[i] << "\t" << priceArray[i] << "\t" << personArray[i] << "\t" << durationArray[i] << endl;
                     }
                  }
                  else if (adminOption == "3")
                  {
                     // packages
                     cout << "Spot\tPrice\tDuration" << endl;
                     for (int j = 0; j < index; j++)
                     {
                        cout << spotArray[j] << "\t" << priceArray[j] << "\t" << durationArray[j] << endl;
                     }
                  }
                  else if (adminOption == "4")
                  {
                     // Search tourist by name;
                     cout << "Enter the name you want to search: ";
                     string name;
                     cin >> name;
                     bool found = false;
                     int foundindex = -1;
                     for (int i = 0; i < index; i = i + 1)
                     {
                        if (nameArray[i] == name)
                        {

                           foundindex = i;

                           found = true;
                        }
                     }
                     if (found == false)
                     {
                        cout << "Record of this name not founded." << name << endl;
                     }
                     else
                     {
                        // if name found;
                        cout << "Name\tage\tSpot\tPrice\tDuration" << endl;
                        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << spotArray[foundindex] << "\t" << priceArray[foundindex] << "\t" << durationArray[foundindex] << endl;
                     }
                  }
                  else if (adminOption == "5")
                  {
                     // update tourist record;
                     cout << "Enter the name you want to update record of: ";
                     string name;
                     cin >> name;

                     bool found = false;
                     int foundindex = -1;
                     for (int i = 0; i < index; i = i + 1)
                     {
                        if (nameArray[i] == name)
                        {

                           foundindex = i;

                           found = true;
                           break;
                        }
                     }
                     if (found == true)
                     {

                        cout << "================= Old Record ================" << endl;
                        cout << "Name\tage\tSpot\tPrice\tDuration" << endl;
                        cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << spotArray[foundindex] << "\t" << priceArray[foundindex] << "\t" << durationArray[foundindex] << endl;

                        cout << "Enter new record for update " << endl;
                        cout << "Enter the new name:";
                        string name;
                        cin >> name;

                        cout << "Enter the age:";
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

                        nameArray[foundindex] = name;
                        spotArray[foundindex] = spot;
                        ageArray[foundindex] = age;
                        priceArray[foundindex] = price;
                        durationArray[foundindex] = duration;
                     }
                     else
                     {
                        cout << "Record not found" << endl;
                     }
                  }
                  else if (adminOption == "6")
                  {
                     // for deleting record;
                     cout << "Enter the name you want to delete record of: ";
                     string name;
                     cin >> name;

                     bool found = false;
                     int foundindex = -1;
                     for (int i = 0; i < index; i = i + 1)
                     {
                        if (nameArray[i] == name)
                        {

                           foundindex = i;

                           found = true;
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
                        cout << "Record of " << name << " Deleted " << endl;
                     }
                     else
                     {
                        cout << "Record not found " << endl;
                     }
                  }
                  else if (adminOption == "7")
                  {
                     // swapping and sorting;
                     for (int i = 0; i < index - 1; i++)
                     {
                        for (int j = 0; j < index - i - 1; j++)
                        {
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

                     cout << "The Records sorted by Highest Rating!" << endl;

                     cout << "Name\tRating\tSpot\tPrice" << endl;
                     cout << "------------------------------------" << endl;
                     for (int i = 0; i < index; i++)
                     {
                        if (nameArray[i] != " " && nameArray[i] != "")
                        {
                           cout << nameArray[i] << "\t" << ratingArray[i] << "\t" << spotArray[i] << "\t" << priceArray[i] << endl;
                        }
                     }
                  }
                  else if (adminOption == "8")
                  {
                     break; // to go back;
                  }
                  else
                  {
                     cout << "Wrong Option selected" << endl;
                  }
                  cout << "Press any key to continue";
                  getch();
                  // for getting character;
               }
               cout << "Press any key to continue.." << endl;
               getch();
               break;
            }
            else
            {
               cout << "Username or Password is invalid" << endl;
            }
            cout << "Press any key to continue... ";
            getch();
         }
      }
      else if (userOption == "2")
      {
         // tourist code here;
         system("cls");
         cout << "Welcome to Tourist Portal" << endl;
         cout << "---Tourist Menu---" << endl;

         cout << "Enter your name:";
         string name;
         cin >> name;

         cout << "Enter your age:";
         int age;
         cin >> age;

         int person = 0;
         string sspot = "";
         bool found = false;

         // available spots; //top rated;
         cout << "\n ------Available Spots-----" << endl;
         for (int i = 0; i < 5; i++)
         {
            cout << i + 1 << " . " << spotArray[i] << " (Rs. " << priceArray[i] << ") [Rating : " << ratingArray[i] << "/5 ]" << endl;
            if (ratingArray[i] == 5)
            {
               cout << " ---->> TOP RATED <<---- " << endl;
            }
            cout << endl;
         }

         while (true)
         {
            // for selecting spot;
            cout << "Enter the spot you want to travel from the list." << endl;
            cout << "--->" << " ";

            cin >> sspot;
            for (int i = 0; i < 5; i++)
            {
               if (sspot == spotArray[i])
               {
                  found = true;

                  // individuals;
                  cout << "How many individuals are travelling ? ";
                  cin >> person;

                  nameArray[index] = name;
                  spotArray[index] = sspot;
                  ageArray[index] = age;
                  personArray[index] = person;
                  priceArray[index] = priceArray[i] * person;
                  durationArray[index] = durationArray[i];
                  index++;
                  break;
               }
            }
            if (found)
            {
               // successful booking;
               cout << " Congratulations your booking is successful." << endl;
               cout << "You Booked for " << sspot << "!" << endl;
               break;
            }
            else
            {
               // when spot not matched;
               cout << " We are not offering tour for " << sspot << "." << endl;
               cout << "Try Again." << endl;
            }
         }
         if (found)
         {
            // receipt section;
            system("cls");
            cout << "************************************************************" << endl;
            cout << "                     THE ADVENTURE COMPASS                  " << endl;
            cout << "                        BookinG Receipt                     " << endl;
            cout << "************************************************************" << endl;
            cout << " Name : " << name << endl;
            cout << " Destination : " << sspot << endl;

            for (int j = 0; j < 5; j++)
            {
               if (sspot == spotArray[j])
               {
                  cout << "Activity : " << activityArray[j] << endl;
               }
            }
            cout << "Total Persons : " << person << endl;
            cout << "Total Bill : RS. " << priceArray[index - 1] << endl;
            cout << "************************************************************" << endl;

            cout << "   Congratulations! Your booking is successful. " << endl;
         }

         cout << "Press any key to continue .... :";
         getch();
      }
      else if (userOption == "3")
      {
         break;
         // to exit;
      }
      else
      {
         // for selecting log out from 1st admin menu;
         cout << "You entered wrong option " << endl;
         cout << "Press any key to proceeed futher." << " ";
         getch();
      }
   }

   cout << "Thanks for visting TMS" << endl;
}