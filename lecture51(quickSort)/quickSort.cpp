#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int st, int end){
    int i = st-1;
    for(int j = st; j < end; j++){
        if(nums[j] <= nums[end]){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    i++;
    swap(nums[i],nums[end]);
    return i;
}

void quickSort(vector<int> &nums, int st, int end){
    if(st < end){
    int pivotIdx = partition(nums, st, end);
    
    //leftSide
    quickSort(nums,st,pivotIdx - 1);
    // rightSide
    quickSort(nums, pivotIdx + 1, end);
        
    }
}

int main(){
    vector<int> nums = {12, 31, 35, 8, 32, 17};
    
    quickSort(nums, 0, 5);
    
    for(int val : nums){
        cout << val << " ";
    }
    
    return 0;
}