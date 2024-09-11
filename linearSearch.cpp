#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

// int linearSearch(int arr[], int size, int target){
//     for(int i = 0; i < size; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

int reverseLinearSearch(int arr[], int size, int target){
    for(int i = size-1; i >=0; i--){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    // Your code starts here
    int arr[7];
    int size = 7;

    for(int i = 0; i < size; i++){
        cout << "Enter the value of " << i << endl;
        cin>>arr[i];
    }

    printArray(arr, size);

    //int ans = linearSearch(arr, size, 89);
    int ans = reverseLinearSearch(arr, size, 77);
    if( ans == -1){
        cout << "Your target element was not found!!"<< endl;
    }else{
        cout << "Your target value is present at "<< ans << endl;
    }
    
    return 0;
}