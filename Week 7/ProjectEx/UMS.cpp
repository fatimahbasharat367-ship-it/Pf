#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
   // Total size;
   // memory or can say rooms / boxes in which value can be stored;
   int Total_Students = 1000;
   int index = 7; // memory showing values or can say things already present in boxes;

   // Data Structures , Parallel arrays ;
   string NameArray[Total_Students] = {"Ayesha", "Warda", "Zain", "Bilal", "Esha", "Hamza", "Dua"};
   int AgeArray[Total_Students] = {19, 20, 18, 19, 20, 18, 19};
   float MatricArray[Total_Students] = {1050, 890, 1010, 950, 1080, 920, 995};
   float InterArray[Total_Students] = {890, 878, 920, 810, 1015, 840, 910};
   float eCATArray[Total_Students] = {350, 280, 310, 250, 380, 290, 320};
   string pref1Array[Total_Students] = {"CE", "CS", "CE", "EE", "CS", "CE", "EE"};
   string pref2Array[Total_Students] = {"CS", "CE", "CS", "CE", "EE", "EE", "CS"};
   string pref3Array[Total_Students] = {"EE", "EE", "EE", "CS", "CE", "CS", "CE"};
   float AggArray[Total_Students];

   // CRUD Create, Read, Update, Delete;
   while (true)
   // this helps the program to continue until we enter break (will not let the code to end)
   {

      // main header of UMS ;
      system("cls"); // to clear the screen after choosing option;
      cout << "------------------------------------------------" << endl;
      cout << "-----University Admission Management System-----" << endl;
      cout << "------------------------------------------------" << endl;

      // main menu
      cout << "~~ User Menu ~~" << endl;
      cout << "1-" << " " << " Admin" << endl;
      cout << "2-" << " " << " Student" << endl;
      cout << "3-" << " " << " To Exit" << endl;

      // option choosing by user whether 1, 2 or 3 to proceed futher;
      cout << "Choose option :" << " ";
      int userOption; // to avoid crashes we use string;
      cin >> userOption;
      cout << " You choose :" << " " << userOption << endl;

      if (userOption == 1)
      {
         // code for Admin to be selected;
         int atmptcount = 0;
         // memory;
         // for asking user to enter details for n number of times;

         for (int i = 0; i < 3; i++)
         {
            // used for loop for asking admin to enter details for 3 times;

            system("cls");
            // to clear the admin menu after entering data;

            cout << " Admin Menu :" << endl;
            cout << " Login Attempt : " << i + 1 << endl;
            // show the user how many times he/she attempted to enter details;

            // details of admin;
            cout << "1- Enter Username : ";
            string username;
            cin >> username;
            cout << "2- Enter Password : ";
            int password;
            cin >> password;

            if (username == "admin" && password == 123)
            {
               // if else loop is used to limit the password and username;
               cout << "Login Successfully " << endl;

               while (true)
               // for showing the following menu repeatidly;
               {
                  system("cls");
                  // to clear already screen after entering data to show next;

                  // after login // admin options menu ;
                  cout << " >> Choose the Option :" << endl;
                  cout << "1) Show all the Students. " << endl;
                  cout << "2) Search Students. " << endl;
                  cout << "3) Update Students Record. " << endl;
                  cout << "4) Generate Merit List. " << endl;
                  cout << "5) Delete record by name. " << endl;
                  cout << "6) Logout. " << endl;
                  cout << "Select an option from above one: ";

                  // this adminoption will be used in if else for option selection// for selecting options;
                  int adminOption;
                  cin >> adminOption;
                  if (adminOption == 1)
                  {
                     // Show students record;
                     cout << "Name\tAge\tMatric\tFSc\teCAT\tP1\tP2\tP3" << endl; // 1 time header;
                     for (int i = 0; i < index; i++)
                     {
                        if (NameArray[i] != "")
                        {
                           // 1 student's data;
                           cout << NameArray[i] << "\t" << AgeArray[i] << "\t" << MatricArray[i] << "\t" << InterArray[i] << "\t"
                                << eCATArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t" << endl;
                        }
                     }
                  }
                  else if (adminOption == 2)
                  {
                     // search student by name function;
                     cout << "Search the name here: ";
                     string Name;
                     cin >> Name;

                     // to find either true or false by using boolean function;
                     bool found = false; // 2nd method;
                     int foundindex = -1;
                     //Sentinel value(0 and more than 0 is a valid position to store data);

                     for (int i = 0; i < index; i++)
                     {
                        if (NameArray[i] == Name)
                        {

                           foundindex = i;

                           found = true;
                        }
                     }
                     if (found == false)
                     {
                        cout << "Account not found against name." << Name << endl;
                     }
                     else
                     {
                        //if enter name only then following output;
                        cout << "Name\tAge\tMatric\tFSc\teCAT\tP1\tP2\tP3" << endl;
                        cout << NameArray[foundindex] << "\t" << AgeArray[foundindex] << "\t" << MatricArray[foundindex] << "\t" << InterArray[foundindex] << "\t"
                             << eCATArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref1Array[foundindex] << "\t" << endl;
                     }
                  }
                  else if (adminOption == 3)
                  {
                     // update student record;
                     cout << "Enter the name you want to update: ";
                     string Name;
                     cin >> Name;
                     bool found = false; // 2nd method;

                     int foundindex = -1;
                     //

                     for (int i = 0; i < index; i++)
                     {
                        if (NameArray[i] == Name)
                        {

                           foundindex = i;

                           found = true;
                        }
                     }
                     if (found == true)
                     {
                        //old record will be shown 1st;
                        cout << "------Old Record------" << endl;
                        cout << "Name\tAge\tMatric\tFSc\teCAT\tP1\tP2\tP3" << endl;
                        cout << NameArray[foundindex] << "\t" << AgeArray[foundindex] << "\t" << MatricArray[foundindex] << "\t" << InterArray[foundindex] << "\t"
                             << eCATArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref1Array[foundindex] << "\t" << endl;
                        
                        //asking from the user to enter new details for replacing;
                        cout << "Enter new record for update:" << endl;
                        cout << "1- Enter your name:";
                        string name;
                        cin >> name;
                        cout << "2- Enter your age:";
                        int age;
                        cin >> age;
                        cout << "3- Enter Matric Marks:";
                        float matric;
                        cin >> matric;
                        cout << "4- Enter your Inter Marks:";
                        float inter;
                        cin >> inter;
                        cout << "5- Enter your eCat Marks:";
                        float eCat;
                        cin >> eCat;

                        cout << " Your preference can be CS,CE and EE." << endl; // just to show;

                        cout << "6- Enter your 1st Preference:";
                        string p1;
                        cin >> p1;
                        cout << "7-Enter your 2nd Preference:";
                        string p2;
                        cin >> p2;
                        cout << "8-Enter your 3rd Preference:";
                        string p3;
                        cin >> p3;

                        // parallel arrays;
                        NameArray[foundindex] = name;
                        AgeArray[foundindex] = age;
                        MatricArray[foundindex] = matric;
                        InterArray[foundindex] = inter;
                        eCATArray[foundindex] = eCat;
                        pref1Array[foundindex] = p1;
                        pref2Array[foundindex] = p2;
                        pref3Array[foundindex] = p3;
                     }
                     else
                     {
                        cout << "Record not found" << endl;
                     }
                  }
                  else if (adminOption == 4)
                  {
                     // generate merit list;
                     for (int i = 0; i < index; i++)
                     {
                        float aggi = MatricArray[i] / 1050.0 * 100.0 * 0.30 + InterArray[i] / 1100.0 * 100.0 * 0.4 + eCATArray[i] / 400.0 * 100 * 0.3;
                        AggArray[i] = aggi;
                        //assigning the resulting aggregate to the 1st array we created;
                     }

                     // sorting the data on the basis of aggregate;
                     for (int i = 0; i < index; i++)
                     {
                        for (int j = i + 1; j < index; j++)
                        //used nested loops here for swapping;
                        {
                           if (AggArray[i] < AggArray[j])
                           {

                              // swap Operation;
                              // swapping of name;
                              string temp1 = NameArray[i];
                              NameArray[i] = NameArray[j];
                              NameArray[j] = temp1;

                              // swaping of matric;
                              int temp2 = MatricArray[i];
                              MatricArray[i] = MatricArray[j];
                              MatricArray[j] = temp2;

                              // swaping of inter;
                              int temp3 = InterArray[i];
                              InterArray[i] = InterArray[j];
                              InterArray[j] = temp3;

                              // swaping of ecat;
                              int temp4 = eCATArray[i];
                              eCATArray[i] = eCATArray[j];
                              eCATArray[j] = temp4;

                              // swaping of p1;
                              string temp5 = pref1Array[i];
                              pref1Array[i] = pref1Array[j];
                              pref1Array[j] = temp5;

                              // swaping of p2;
                              string temp6 = NameArray[i];
                              pref2Array[i] = pref2Array[j];
                              pref2Array[j] = temp6;

                              // swaping of p3;
                              string temp7 = pref3Array[i];
                              pref3Array[i] = pref3Array[j];
                              pref3Array[j] = temp7;

                              // swaping of aggregate;
                              float temp8 = AggArray[i];
                              AggArray[i] = AggArray[j];
                              AggArray[j] = temp8;
                              //code to display sorted data;
                           }
                        }
                     }

                     // code to display all data with aggregate;
                     cout << "Name\tAge\tAgg" << endl; // 1 time header;
                     for (int i = 0; i < index; i++)
                     {
                        if (NameArray[i] != "")
                        {

                           // 1 student's data;
                           cout << NameArray[i] << "\t" << AgeArray[i] << "\t" << AggArray[i] << endl;
                        }
                     }

                     // admit students into desciplines;

                  }
                  else if (adminOption == 5)
                  {
                     // delete student record;
                     cout << "Enter the name you want to delete: ";
                     string Name;
                     cin >> Name;
                     bool found = false; // boolean function;
                     int foundindex = -1;
                     for (int i = 0; i < index; i++)
                     {
                        if (NameArray[i] == Name) //selecting name;
                        {

                           foundindex = i;

                           found = true;
                        }
                     }
                     if (found == true)
                     {

                        // parallel array // deleting the data ;
                        NameArray[foundindex] = "";
                        AgeArray[foundindex] = 0;
                        MatricArray[foundindex] = 0;
                        InterArray[foundindex] = 0;
                        eCATArray[foundindex] = 0;
                        pref1Array[foundindex] = "";
                        pref2Array[foundindex] = "";
                        pref3Array[foundindex] = "";
                        cout << "Record of the name deleted succesfully." << endl;
                     }
                     else
                     {
                        //if the new name is enetered by the user that is not present in old data;
                        cout << "Record not found." << endl;
                     }
                  }
                  else if (adminOption == 6)
                  {
                     break; // back;
                  }
                  else
                  {
                     cout << "Wrong option selected." << endl;
                  }
                  cout << "Press any key to proceed futher." << endl;
                  getch(); // to display students record present in loop from starting of loop where we use system("cls");
               }

               cout << "Press any key to proceed futher." << endl;
               getch();
               // to stop the screen.it is neccesary otherwise break will remove whole data present in if else loop;
               break;
               // to stop asking for entering details after succesful login;
            }
            else
            { // for wrong details;
               cout << "You entered wrong Username or Password: " << endl;
               cout << "Try Again." << endl;
            }
            cout << "Press any key to proceed futher. ";
            getch();
            // fuction for getting character to proceed further(here used to show output only);
         }
      }
      else if (userOption == 2)
      {
         // code for Student to be selected;

         system("cls"); // to remove unnecessary data;
         cout << "Welcome to the place where dreams turns into reality. " << endl;
         cout << "Student Menu:" << endl;
         // create variables and store data in our local variables (output);
         cout << "1- Enter your name:";
         string name;
         cin >> name;
         cout << "2- Enter your age:";
         int age;
         cin >> age;
         cout << "3- Enter Matric Marks:";
         float matric;
         cin >> matric;
         cout << "4- Enter your Inter Marks:";
         float inter;
         cin >> inter;
         cout << "5- Enter your eCat Marks:";
         float eCat;
         cin >> eCat;

         cout << " Your preference can be CS,CE and EE." << endl; // just to show;

         cout << "6- Enter your 1st Preference:";
         string p1;
         cin >> p1;
         cout << "7-Enter your 2nd Preference:";
         string p2;
         cin >> p2;
         cout << "8-Enter your 3rd Preference:";
         string p3;
         cin >> p3;

         // parallel arrays;
         NameArray[index] = name;
         AgeArray[index] = age;
         MatricArray[index] = matric;
         InterArray[index] = inter;
         eCATArray[index] = eCat;
         pref1Array[index] = p1;
         pref2Array[index] = p2;
         pref3Array[index] = p3;
         index = index + 1; // or index++;(for next students can say for next data)
         cout << "Data saved Successfully:" << endl;

         cout << "Press any key to proceed futher. "; // for user's ease;
         getch();
         // fuction to stop menu, ask for character and show previous output;
      }
      else if (userOption == 3)
      {
         // code for the  exit of user;
         break; // To go back from user Menu ;
      }
      else
      {
         cout << "You entered wrong Option " << endl;

         cout << "Press any key to proceed futher.";
         getch();
         // to show the output to user if he/she entered wrong number;
         //getch() used for getting character and for displaying  data even after the use of system("cls") ;
      }
   } // end of our main while loop;

   cout << " Thanks for your attention. ";
}