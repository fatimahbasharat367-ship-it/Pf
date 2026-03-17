#include <iostream>
using namespace std;

int main()
{
    string uname, passcode;

    string stuName = "";
    int stuAge = 0;
    string courseName = "";

    int choice;

    
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter Uname: ";
        cin >> uname;

        cout << "Enter Passcode: ";
        cin >> passcode;

        if(uname == "admin" && passcode == "1234")
        {
cout << "Login Successful"<<endl;
            break;
        }
        else
        {
            cout << "Wrong Login"<<endl;
        }

        if(i == 3 && !(uname == "admin" && passcode == "1234"))
        {
            cout << "After many attempts, Program ends."<<endl;
            return 0;
        }
    }

    for(int j = 1; j <= 5; j++)
    {
        cout << endl<<"---- University Management System ----"<<endl;
        cout << "1. Add Student"<<endl;
        cout << "2. View Student"<<endl;
        cout << "3. Add Course"<<endl;
        cout << "4. Exit"<<endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Enter Student Name: ";
            cin >> stuName;

            cout << "Enter Student Age: ";
            cin >> stuAge;

            cout << "Student Added Successfully"<<endl;
        }
        else if(choice == 2)
        {
            if(stuName != "")
            {
                cout << "Student Name: " << stuName << endl;
                cout << "Student Age: " << stuAge << endl;
            }
            else
            {
                cout << "No Student Record Found"<<endl;
            }
        }
        else if(choice == 3)
        {
            cout << "Enter Course Name: ";
            cin >> courseName;

            cout << "Course Added: " << courseName << endl;
        }
        else if(choice == 4)
        {
            cout << "Program Exit"<<endl;
            break;
        }
        else
        {
            cout << "Invalid Choice"<<endl;
        }
    }

    
}