#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int i=0;
    int j = size-1;
    while(j > i){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    // Your code starts here
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    reverseArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}