#include <iostream>
#include <vector>

using namespace std;
// main code for complexity and efficiency.
int majorityElement(vector<int> &nums){
    int freq = 0, ans = 0;
    for (int val : nums){
        if(freq == 0){
            ans = val;
        }
        if(ans == val){
            freq++;
        }else{
            freq--;
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