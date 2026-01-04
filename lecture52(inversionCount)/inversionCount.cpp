#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &nums, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid + 1;
    int invCount = 0;
    while (i <= mid && j <= end){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
            invCount += (mid - i + 1);
        }
    }
    while( i <= mid){
        temp.push_back(nums[i]);
        i++;
    }
    while( j <= end){
        temp.push_back(nums[j]);
        j++;
    }
    for(int i = 0; i < temp.size(); i++){
        nums[i + st] = temp[i];
    }
    return invCount;
}

int mergeSort(vector<int> &nums, int st, int end){
    if(st < end){
    int mid = st + (end - st)/2;
    
    //leftSide
    int leftCount = mergeSort(nums,st,mid);
    // rightSide
    int rightCount = mergeSort(nums, mid + 1, end);
    
    int invCount = merge(nums, st, mid , end);
        
    return leftCount + rightCount + invCount;
    }
    return 0;
}

int main(){
    // vector<int> nums = {12, 31, 35, 8, 32, 17};
    vector<int> nums = {6,3,5,2,7};
    // vector<int> nums = {1,3,5,10,2,6,8,9};
    
    int n = nums.size() - 1;
    
    int invCount = mergeSort(nums, 0, n);
    
    for(int val : nums){
        cout << val << " ";
    }
    cout << endl;
    cout << invCount;
    
    return 0;
}