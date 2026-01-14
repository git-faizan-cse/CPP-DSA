#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> prevSmaller(vector<int> &nums){
    vector<int> ans;
    stack<int> s;

    for(int i = 0; i < nums.size(); i++){
        while(!s.empty() && nums[i] <= s.top()){
            s.pop();
        }
        
        if(s.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }
        s.push(nums[i]);
    }
    return ans;
}

int main(){
    vector<int> values = {3,1,0,8,6};
    
    vector<int> ans = prevSmaller(values);
    for(int i : ans){
        cout << i <<" ";
    }
    return 0;
}