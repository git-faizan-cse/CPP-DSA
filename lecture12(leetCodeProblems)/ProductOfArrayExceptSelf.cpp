#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int product = 1;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            product = product * nums[j];
        }
        ans.push_back(product); 
    }
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}