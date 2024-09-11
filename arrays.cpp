#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[10];

    // int brr []; // this is error not required

    // int crr[] = {1,2,3,4,5,6,7};

    // int drr[4] = {0};

    // cout << drr[0] << endl;

    // cout << crr[7] << endl;

    // int arr [3] = {10,20,30};
    // fill(arr, arr+3, 69);
    // cout << arr << endl;
    // cout<< arr[0] << endl;
    // cout<< arr[1] << endl;
    // cout<< arr[2] << endl;

    // input in array
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value for box " << i << endl;
        cin >> arr[i];
    }
// also pass the size of array !important
    printArray(arr, 5);

    return 0;
}