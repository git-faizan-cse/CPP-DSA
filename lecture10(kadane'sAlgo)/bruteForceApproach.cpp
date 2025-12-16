#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    int n = nums.size();
    int maxSum = -12345;
    for(int st = 0; st < n; st++){
        int currSum = 0;
        for(int end = st; end < n; end++){
            currSum = currSum + nums[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout << maxSum;
    return 0;
}