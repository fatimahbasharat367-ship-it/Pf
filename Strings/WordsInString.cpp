#include<iostream>
using namespace std;

int main() {
    char A[]="How are you Gorgeous";
    int count=0;
    int tcount;
    for(int i = 0; A[i] !=0; i++){
        if (A[i] == ' ' && A[i-1] != ' '){
            count++;
        }
    }
     tcount = count + 1;
    cout << "The total words in string are : " << tcount;
   return 0;
}