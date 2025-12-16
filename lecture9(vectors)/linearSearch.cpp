#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &nums, int target){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;

    int index = linearSearch(nums, target);
    cout << "Number: 8 found at index number: " << index;
    return 0;
}