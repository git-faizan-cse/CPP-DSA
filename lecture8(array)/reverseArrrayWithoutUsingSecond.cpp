#include <iostream>
using namespace std;

// if required.
void swapManual(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size -1;
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        // cout << start << endl; // for testing 
        // cout << end << endl;
    }
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr, size);

    for(int i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}