#include <iostream>
#include <vector>

using namespace std;

int peakSearch(vector<int> &nums){
    int st = 1;
    int end = nums.size() - 2; // st and end for edge cases as they can never be the peak elements
    // and we have more than 3 elements always given

    while (st <= end){
        int mid = st + (end - st)/ 2;
        if(nums[mid - 1] < nums[mid] && nums[mid] > nums[mid+1]){
            return mid;
        }else if(nums[mid - 1] < nums[mid] && nums[mid] < nums[mid + 1] ){
            st = mid + 1;
        }else if(nums[mid - 1] > nums[mid] && nums[mid] > nums[mid + 1]){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    int index = peakSearch(nums);
    cout << index ;
    return 0;
}