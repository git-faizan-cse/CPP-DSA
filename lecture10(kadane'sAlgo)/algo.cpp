#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums={3, -4, 5, 4, -1, 7, -8};
    int n = nums.size();
    int maxSum = - 12345;
    int currSum = 0;
    for(int st = 0; st < n; st++){
        currSum = currSum + nums[st];
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum;
    return 0;
}