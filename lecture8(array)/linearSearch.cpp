#include <iostream>
using namespace std;

int linearSearch (int arr[], int size, int target){
    for (int i =0; i < size; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);
    int target = 8;
    int index = linearSearch(arr, size, target);
    cout << "Number: 8 found at index number: " << index;
    return 0;
}