#include <iostream>

using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int prodOfArray(int arr[], int size){
    int prod = 1;
    for (int i = 0; i < size; i++){
        prod *= arr[i];
    }
    return prod;
}

int main(){
    int arr[] = {5, 5, 5, 5};
    int size = sizeof(arr)/ sizeof(int);

    int sum, product;
    sum = sumOfArray(arr, size);
    cout << sum << endl;

    product = prodOfArray(arr, size);
    cout << product << endl;
    return 0;
}