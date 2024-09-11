#include <iostream>
using namespace std;

void shiftArray(int arr[], int size, int shift){
    int finalShift = shift%size;
    if(finalShift == 0){
        return;
    }

    int temp[1000];
    int index = 0;
    for(int i=size-finalShift; i<size; i++){
        temp[index] = arr[i];
        index++;
    }

    // step2: shift array elements by final shift places
    for(int i=size-1; i>=0; i--){
        if(i-finalShift >= 0){
            arr[i] = arr[i-finalShift];
        }
      
    }

    // step3: copy temp elements in original array

    for(int i =0; i< finalShift; i++){
        arr[i] = temp[i];
    }
}

int main() {
    // Your code starts here
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int shift = 3;

     for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shiftArray(arr, size, shift);

     for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}