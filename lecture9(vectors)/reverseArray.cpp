#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &nums){
    int start = 0;
    int end = nums.size() - 1;
    while (start < end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> nums = {4, 2, 7, 8, 1, 2, 5};

    reverseArray(nums);

    for(int val : nums){
        cout << val << " ";
    }

    return 0;
}