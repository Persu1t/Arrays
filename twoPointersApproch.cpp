// two -pointers aprroach or theorm
#include <iostream>
using namespace std;

void printExtream(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (j >= i)
    {
        if (i == j)
        {
            // cout << arr[i] << endl;
            // i++;
            // j--;
            // if(j < i){
            //     break;
            // }
            cout << arr[i] << endl;
            i++;
        }
        else
        {
            cout << arr[i] << endl;
            i++;
            cout << arr[j] << endl;
            j--;
        }
    }
}

int main()
{
    // Your code starts here

    int arr[5];
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element for  " << i << endl;
        cin >> arr[i];
        cout << endl;
    }

    printExtream(arr, size);
    return 0;
}