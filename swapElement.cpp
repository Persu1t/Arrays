#include <iostream>
using namespace std;

void swapArray(int arrr[], int size){
    int i = 0;
    while(i+1 < size){
        swap(arrr[i], arrr[i+1]);
        i+=2;
    }
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    swapArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}