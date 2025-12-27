#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &nums, int maxAllowedLength, int boards, int painters){
    int painter = 1, length = 0;

    for(int i = 0; i < boards; i++){
        if(nums[i] > maxAllowedLength){
            return false;
        }

        if(length + nums[i] <= maxAllowedLength){
            length = length + nums[i];
        }else{
            painter++;
            length = nums[i];
        }
    }

    return painter > painters ? false : true;
}

int minTime(vector<int> &nums, int boards, int painters){
    if (painters > boards){
        return -1;
    }
    int sum = 0;
    for(int val : nums){
        sum += val;
    }
    int st = 0;
    int end = sum;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if( isValid(nums, mid, boards, painters)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {40, 30, 10, 40};
    int n = 4, m = 2;

    cout << minTime(arr, n, m) << endl;

    return 0;
}