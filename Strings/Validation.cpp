#include<iostream>
using namespace std;
int validate (const char *A ){
    int i;
    for(i = 0; A[i] != '\0'; i++ ){
    if((A[i]>=65 && A[i]<=90 )
     ||(A[i]>=97 && A[i]<=122)
     ||(A[i]>='0' && A[i]<='9')){
        return 0;
     }
    }
    return 1;
}
int main() {
    const char*A = "Fat?imah";
    if(validate(A)){
        cout << "Valid Bro. ";
    }else{
        cout << "Invalid Man.";
    }
}