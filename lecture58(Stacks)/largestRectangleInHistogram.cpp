class Solution {
public:
    int calWidth(int i, vector<int>& nums){
        int l, r;
        int n = nums.size();
        l = r = i;
        while(nums[l] <= nums[i] && nums[r] <= nums[i] && l >= 0 && r < n){
            l--;
            r++;
        }
        while(nums[l] <= nums[i] && l >= 0){
            l--;
        }
        while(nums[r] <= nums[i] && r < n){
            r++;
        }

        return r-l-1;
    }

    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        int currArea = 1;
        for(int i = 0; i < heights.size(); i++){
            currArea = heights[i] * calWidth(i, heights);
            ans = max(ans, currArea);
        }
        return ans;
    }
};

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right(n,0);
        vector<int> left(n,0);
        stack<int> s;

        // for right smaller
        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }

            right[i] = s.empty() ? n : s.top();

            s.push(i);

        }
        // empty the stack
        while(!s.empty()){
            s.pop();
        }

        // for left side
        for(int i = 0; i < n ; i++){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }

            left[i] = s.empty() ? -1 : s.top();

            s.push(i);

        }


        int ans = 0;
        int width;
        int currArea;
        for(int i = 0; i < n; i++){
            width = right[i] - left[i] - 1;
            currArea = heights[i] * width;
            ans = max(currArea, ans);
        }
        return ans;
    }
};