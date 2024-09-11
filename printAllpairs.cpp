#include <iostream>
using namespace std;

void printAllPairs(int arr[], int size){
    for(int i = 0; i < size; i++){
        // a looping variable "j" will go from starting to end of array
        for(int j=0; j<size; j++){
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}

int main() {
    // Your code starts here
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    printAllPairs(arr, size);
    return 0;
}