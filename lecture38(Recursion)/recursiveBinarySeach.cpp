
#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> &nums,int  start,int  end, int target){
    if(start > end){
        return false;
    }
    int mid = start + (end - start)/2;
    if(nums[mid] == target){
        return true;
    }else if(nums[mid] < target){
        return binarySearch(nums, mid + 1, end,target);
    }else{
        return binarySearch(nums, start, mid - 1,target);
    }
}
int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target = 18;
    int start = 0;
    int end = nums.size() - 1;
    binarySearch(nums, start , end, target)? cout << "Element Found" : cout << "Element NOT Found";
    

    return 0;
}