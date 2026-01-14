class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> s;
        unordered_map<int,int> pairs;
        for(int i = nums2.size() - 1; i >= 0; i--){
            while(!s.empty() && nums2[i] >= s.top()){
                s.pop();
            }
            if(s.empty()){
                pairs[nums2[i]] = -1;
            }else{
                pairs[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        for(int j = 0; j < nums1.size(); j++){
            ans.push_back(pairs[nums1[j]]);
        }
        return ans;
    }
};