#include <iostream>
#include <vector>

using namespace std;

void dutchNationalFlag(vector<int> &nums){
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high){
        if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }
    }
}

int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    dutchNationalFlag(arr);

    for(int val : arr){
        cout << val << endl;
    }

    return 0;
}