#include <iostream>
#include <climits>
using namespace std;

int findMinIndex(int arr[], int size){
    int temp = INT_MAX;
    int index = -1;
    for(int i = 0; i < size; i++){
        if(temp > arr[i]){
            temp = arr[i];
            index = i;
        }
    }
    return index;
}

int findMaxIndex(int arr[], int size){
    int temp = INT_MIN;
    int index = -1;
    for (int i = 0; i< size; i++){
        if(temp < arr[i]){
            temp = arr[i];
            index = i;
        }
    }
    return index;
}

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);

    int minIndex, maxIndex;
    minIndex = findMinIndex(arr, size);
    maxIndex = findMaxIndex(arr, size);
    cout << "Min No Index: "<< minIndex << endl;
    cout << "Max No Index: "<< maxIndex << endl;

    cout << "Array Before Swapping Min and Max number: " << endl;
    printArray(arr, size);
    swap(arr[minIndex],arr[maxIndex]);
    cout << "Array After Swapping Min and Max numbers: " << endl;
    printArray(arr, size);
    

    return 0;
}