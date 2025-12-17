#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// main code for complexity and efficiency.
int majorityElement(vector<int> &nums){
    sort(nums.begin(),nums.end());
    int freq = 1, ans = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if( nums[i] == nums[i-1]){
            freq++;
        }else{
            if(freq > nums.size() / 2){
                return ans;
            }
            else{
                freq = 1;
                ans = nums[i];
            }
        }
    }
    return ans;
}

// used for demonstration purpose
int main(){
    vector<int> nums = { 2, 2, 1, 1, 1};

    int num = majorityElement(nums);
    cout << num;

    return 0;
}