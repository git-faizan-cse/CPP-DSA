#include <iostream>

using namespace std;
int smallestMarksIndex(int arr[], int size){
    int temp = 12345;
    int index = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < temp){
            temp = arr[i];
            index = i;
        }
    }
    return index;
}

int smallestMarks(int arr[], int size){
    int temp = 12345;
    for(int i = 0; i < size; i++){
        if(arr[i] < temp){
            temp = arr[i];
        }
    }
    return temp;
}

int largestMarksIndex(int arr[], int size){
    int temp = -12345;
    int index = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > temp){
            temp = arr[i];
            index = i;
        }
    }
    return index;
}

int largestMarks(int arr[], int size){
    int temp = -12345;
    for(int i = 0; i < size; i++){
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    return temp;
}

int main(){
    int size = 5;
    int marks[size] = {98, 65, 96, 34, 74};

    cout << "Smallest Marks Index: "<< smallestMarksIndex(marks, size) << endl;
    cout << "Smallest Marks: "<< smallestMarks(marks, size) << endl;
    cout << "Largest Marks Index: " << largestMarksIndex(marks , size) << endl;
    cout << "Largest Marks: " << largestMarks(marks , size) << endl;
    return 0;
}