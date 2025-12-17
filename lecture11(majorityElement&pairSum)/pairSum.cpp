#include <iostream>
#include <vector>

using namespace std;
// main code for complexity and efficiency.
vector<int> pairSum(vector<int> &nums, int target){
    vector<int> ans;
    int start = 0;
    int end = nums.size() - 1;
    
    while (nums[start] + nums[end] != target){
        if(nums[start] + nums[end] > target){
            end--;
        }
        if(nums[start] + nums[end] < target){
            start++;
        }
    }
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}

// used for demonstration purpose
int main(){
    vector<int> nums = { 2, 7, 11 ,15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}