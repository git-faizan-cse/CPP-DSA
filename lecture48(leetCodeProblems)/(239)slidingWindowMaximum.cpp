class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        // 1st wind
        for(int i = 0; i < k; i++){

            while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // 2nd
        for(int i = k; i < nums.size(); i++){
            //pushing maximum in result
            res.push_back(nums[dq.front()]);

            // removing element not part of subwindow
            while (dq.size() > 0 && dq.front() <= i - k){
                dq.pop_front();
            }

            // checking if back of dq is less than curr to remove it 
            while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            // push curr greater element to deque.
            dq.push_back(i);
        }
        // inserting the last no to the deque.
        res.push_back(nums[dq.front()]);

        return res;
    }
};