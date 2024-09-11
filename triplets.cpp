#include <iostream>
using namespace std;

void getAllTriplites(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                cout << arr[i] << " " << arr[j] << " " << arr[k] <<endl;
                count++;
            }
        }
    }
    cout << "Total count: " << count << endl;
}

int main() {
    // Your code starts here

    int arr [4] = {10,20,30,40};
    int size = 4;
    getAllTriplites(arr, size);
    return 0;
}