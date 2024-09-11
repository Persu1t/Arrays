#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

void count0sand1s(int arr[], int size){
    int count0s = 0;
    int count1s = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count0s++;
        }
        if(arr[i] == 1){
            count1s++;
        }
    }
    cout << "Count of 0s is: " << count0s << " and count of 1s is "<< count1s << endl;
}

int main() {
    // Your code starts here
    int arr[7];
    int size = 7;
    for(int i=0; i<size; i++){
        cout << "Enter element for  "<< i << endl;
        cin >> arr[i];
    }
    printArray(arr, size);
    count0sand1s(arr, size);
    return 0;
}