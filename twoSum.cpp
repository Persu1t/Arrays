#include <iostream>
using namespace std;

pair<int, int> checkTwoSum(int arr[], int size, int target){
    pair<int, int> ans = make_pair(-1,-1);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i]+arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}

void checkTwoSumPrinter(int arr[], int size, int target){
    pair<int, int> ans = make_pair(-1,-1);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i]+arr[j] == target){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main() {
    // Your code starts here

    int arr[] = {10,5,15,30,20};
    int size = 5;

    int target = 35;
    pair<int, int> ans = checkTwoSum(arr, size, target);
    cout << ans.first << endl;
    cout << ans.second << endl;

    cout << endl;

    checkTwoSumPrinter(arr, size, target);
    return 0;
}