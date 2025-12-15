#include <iostream>
#include <climits>
using namespace std;

int findMinVal(int arr[], int size){
    int temp = INT_MAX;
    for(int i = 0; i < size; i++){
        if(temp > arr[i]){
            temp = arr[i];
        }
    }
    return temp;
}

int findMaxVal(int arr[], int size){
    int temp = INT_MIN;
    for (int i = 0; i< size; i++){
        if(temp < arr[i]){
            temp = arr[i];
        }
    }
    return temp;
}

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapMultipleOccurances(int arr[], int size, int minVal, int maxVal){
    for(int i = 0; i < size; i++){
        if(arr[i] == minVal){
            arr[i] = maxVal;
        } else if(arr[i] == maxVal){
            arr[i] = minVal;
        }
    }
}

int main(){
    int arr[] = {4, 1, 8, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);

    int minVal, maxVal;
    minVal = findMinVal(arr, size);
    maxVal = findMaxVal(arr, size);
    cout << "Min No Index: "<< minVal << endl;
    cout << "Max No Index: "<< maxVal << endl;

    cout << "Array Before Swapping Min and Max number: " << endl;
    printArray(arr, size);
    
    swapMultipleOccurances(arr, size, minVal, maxVal);
    
    cout << "Array After Swapping Min and Max numbers: " << endl;
    printArray(arr, size);
    

    return 0;
}