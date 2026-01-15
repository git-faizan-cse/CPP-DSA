class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        stack<int> s;
        int idx;
        for(int i = (2 * n) - 1; i >= 0; i--){
            idx = i % n;
            while(!s.empty() && nums[idx] >= s.top()){
                s.pop();
            }
            ans[idx] = s.empty() ? -1 : s.top();
            s.push(nums[idx]);
        }
        return ans;
    }
};