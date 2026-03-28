#include<iostream>
using namespace std;

int main() {
     int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int number[n];
    cout<<"Enter "<<n<<" elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>number[i];
    }
    bool IsfoundOdd=true;
    bool IsfoundEven=true;
    for(int i=0;i<n;i=i+2){
        if(number[i]%2!=0){
            IsfoundEven=false;
        }
    }
    for(int i=1;i<n;i=i+2){
        if(number[i]%2==0){
            IsfoundOdd=false;
        }
    }

    if(IsfoundOdd&&IsfoundEven){
        cout<<"The Array is special"; 
    }
    else{
        cout<<"The Array is not special";
    }

   return 0;
}