#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> nextGreater(vector<int> &nums){
    vector<int> ans(nums.size(),0);
    stack<int> high;
    
    for(int i = nums.size() - 1; i >= 0; i--){
        while(!high.empty() && nums[i] >= high.top()){
            high.pop();
        } 
        if(high.empty()){
            ans[i] = (-1);
        }else if (nums[i] <= high.top() ){
            ans[i] = (high.top());
        }
        high.push(nums[i]);
        
    }
    return ans;
}

int main(){
    vector<int> values = {6,8,0,1,3};
    
    vector<int> ans = nextGreater(values);
    for(int i : ans){
        cout << i <<" ";
    }
    return 0;
}