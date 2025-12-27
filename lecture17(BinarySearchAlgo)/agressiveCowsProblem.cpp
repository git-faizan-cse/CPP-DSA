#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &nums, int maxAllowedDistance)

int MaxOfMinDistance(vector<int> &nums, int stalls, int cows){
    if (cows > stalls){
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
        if(isPossible(nums, mid, stalls, cows)){
            ans = mid;
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {1, 2, 8, 4, 9};
    int stalls = 5, cows = 3;

    cout << MaxOfMinDistance(arr, stalls, cows);
    return 0;
}