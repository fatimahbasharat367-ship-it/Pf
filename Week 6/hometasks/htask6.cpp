#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    string stu[n];
    cout<<"Enter the Name of "<<n<<" students one by one: "<<endl;
    for(int i=0;i<n;i++){
        cin>>stu[i];
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            
            if(stu[j] > stu[j+1]) {
                string temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }

    cout << "\nStudents in alphabetical order:" << endl;
    for(int i = 0; i < n; i++) {
        cout << stu[i] << endl;
    }
}