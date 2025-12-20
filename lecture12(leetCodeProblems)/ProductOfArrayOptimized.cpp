#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> prefix(n);
    vector<int> suffix(n);
    vector<int> ans(n);

    for(int i = 0; i < n;i++){
        if (i == 0){
            prefix[i] = 1;
            continue;
        }
        prefix[i]= prefix[i-1] * nums[i-1];
    }
    for(int i = n -1;i >= 0; i--){
        if(i == n-1){
            suffix[i] = 1;
            continue;
        }
        suffix[i]= suffix[i+1] * nums [i+1];
    }

    for(int i = 0; i < n; i++){
        ans[i] = prefix[i] * suffix[i];
    }

    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}