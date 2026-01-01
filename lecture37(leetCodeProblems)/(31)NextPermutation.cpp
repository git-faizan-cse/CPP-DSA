class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int piv = -1;

        for(int st = n - 1; st > 0; st--){
            if(nums[st-1]<nums[st]){
                piv = st - 1;
                break;
            }
        }

        if(piv == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i = n - 1; i > piv; i--){
            if(nums[i]>nums[piv]){
                swap(nums[i],nums[piv]);
                break;
            }
        }

        reverse(nums.begin() + piv + 1,nums.end());
    }
};