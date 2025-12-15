#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 7, 9, 1, 2, 5};
    int size = 7;
    int newArr[7];

    int j = 0;
    for(int i = size - 1; i >= 0; i--){
        
        newArr[j] = arr[i];

            cout << newArr[j];
            cout << arr[i];
            cout << endl;

        j++;

    }

    for( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for( int i = 0; i < size; i++){
        cout << newArr[i] << " ";
    }

    return 0;
}