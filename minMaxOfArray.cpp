#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int maxElement( int arr[], int size){
    int intMax = INT_MIN;
    for(int i = 0; i < size; i++){
        // if(arr[i] > intMax ){
        //     intMax = arr[i];
        // }
        
        //  max function return max of two element
        intMax = max(intMax, arr[i]);
    }
    return intMax;
}

int main() {
    // Your code starts here

    int arr[7];
    int size = 7;

    for(int i = 0; i < size; i++){
        cout << "Enter the value for "<< i << endl;
        cin >> arr[i];
    }

    printArray(arr, size);
    int ans = maxElement(arr, size);
    cout << "Max element of your array is " << ans << endl;



    return 0;
}