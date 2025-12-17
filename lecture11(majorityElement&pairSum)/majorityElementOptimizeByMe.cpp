#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// main code for complexity and efficiency.
int majorityElement(vector<int> &nums){
    sort(nums.begin(),nums.end());
    int mid = nums.size() / 2;
    return nums[mid];
}

// used for demonstration purpose
int main(){
    vector<int> nums = { 2, 2, 1, 1, 1};

    int num = majorityElement(nums);
    cout << num;

    return 0;
}