#include <iostream>
#include <vector>

using namespace std;
// main code for complexity and efficiency.
int majorityElement(vector<int> &nums){
    for (int val : nums){
        int freq = 0;
        for(int mch : nums){
            if( val == mch){
                freq++;
            }
        }
        if (freq > nums.size()/2){
            return val;
        }
    }
}

// used for demonstration purpose
int main(){
    vector<int> nums = { 2, 2, 1, 1, 1};

    int num = majorityElement(nums);
    cout << num;

    return 0;
}