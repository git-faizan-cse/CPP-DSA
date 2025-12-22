#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int target, int start, int end){
    if(start <= end){
        int mid = start + (end - start)/2;
        if(target > nums[mid]){
            return binarySearch(nums,target,mid+1,end);
        }else if(target < nums[mid]){
            return binarySearch(nums,target,start,mid -1);
        }else{
            return mid;
        }
    }else{
    return -1;
    }
}

int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int st = 0;
    int end = arr.size() - 1;
    cout << st << " " << end << endl;
    int index = binarySearch(arr, target,st, end);
    cout << index;
    return 0;
}