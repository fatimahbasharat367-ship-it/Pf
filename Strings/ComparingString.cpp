#include <iostream>
using namespace std;

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";
    int i, j;

    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
        {
            cout << "The words are not same. "<< endl;
            break;
        }
    }
    if (A[i] == B[j])
    {
        cout << "The words are same.";
    }
    else if (A[i] < B[j])
    {
        cout << "The  1st word comes 1st in dictionary. ";
    }
    else
    {
        cout << "The 2nd word comes later in the dictionary. ";
    }
    return 0;
}