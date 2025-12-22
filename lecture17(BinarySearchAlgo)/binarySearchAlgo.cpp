#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target){
    int st = 0;
    int end = arr.size()-1;

    while(st <= end){
        // int mid = (st + end)/2;
        // to overcome overflow condition we use:
        int mid = st + (end - st)/2;
        if(target > arr[mid]){
            st = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int index = binarySearch(arr, target);
    cout << index;
    return 0;
}