#include <iostream>
using namespace std;

void sort0sand1s(int arr[], int size){
    int zerosCount = 0;
    int onesCount = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zerosCount++;
        }else{
            onesCount++;
        }
    }

    for(int i=0; i<zerosCount; i++){
        arr[i] = 0;
    }
    for(int i =  zerosCount; i < onesCount; i++){
        arr[i]= 1;
    }
}

int main() {
    // Your code starts here
    int arr[8] = {0,1,1,0,0,1,1,1};
    int size = 8;
    sort0sand1s(arr, size);
     for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}