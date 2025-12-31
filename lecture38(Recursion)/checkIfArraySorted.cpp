#include <iostream> 
#include <vector>

using namespace std;

bool isSorted(vector<int> &arr , int n){
    // base case
    if (n == 0 || n == 1){
        return true;
    }

    // recursive case
    if (arr[n - 1] < arr[n - 2]){
        return false;
    }
    return isSorted(arr, n - 1);

    
}


int main(){
    vector<int> arr = { 1, 2, 3,4, 5, 6, 7};

    isSorted(arr,arr.size())? cout << "Array is sorted" << endl : cout << "Array is not sorted" << endl;
    return 0;
}