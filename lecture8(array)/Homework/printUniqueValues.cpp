#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 2, 4, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);

    for(int i =0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j < size; j++){
            if(i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
    return 0;
}