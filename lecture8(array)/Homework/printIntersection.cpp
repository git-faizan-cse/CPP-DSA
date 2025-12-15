#include <iostream>
using namespace std;

int main(){
    int arr1[] = {4, 2, 7, 8, 1, 2, 5};
    int size1 = sizeof(arr1)/ sizeof(int);
    int arr2[] = {4, 2, 2, 4, 1, 2, 5};
    int size2 = sizeof(arr2)/ sizeof(int);

    for (int i = 0; i< size1; i++){
        bool alreadyPrinted = false;
        for(int j = 0; j < i; j++){
            if (arr1[i] == arr1[j]){
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted) continue;
        
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return 0;
}