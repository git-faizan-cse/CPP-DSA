class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        if(nums.size() == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n] != nums[n-1]) return nums[n];

        int st = 1, end = n - 1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                    return nums[mid];
                }
            if(mid%2 == 0){
                if(nums[mid] == nums[mid-1]){
                    end = mid - 1;
                }else{
                    st = mid + 1;
                }
            }else{
                if(nums[mid] == nums[mid-1]){
                    st = mid + 1;
                }else{
                    end = mid -1;
                }
            }
        }
        return -1;
    }
};