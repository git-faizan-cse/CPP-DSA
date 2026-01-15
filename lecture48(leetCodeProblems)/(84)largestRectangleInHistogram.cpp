class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n,0);
        vector<int> right(n,0);

        stack<int> s;
        // right smaller
        for(int i = n-1; i >= 0; i--){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }

            right[i] = s.empty() ? n : s.top();

            s.push(i); 
        }
        while(!s.empty()){
            s.pop();
        }

        // left smaller
        for(int i = 0; i < n; i++){
            while(!s.empty() && heights[i] <= heights[s.top()]){
                s.pop();
            }

            left[i] = s.empty() ? -1 : s.top();

            s.push(i); 
        }

        int ans = 0;
        int currArea;
        for(int i = 0; i< n; i++){
            currArea = heights[i] * (right[i] - left[i] - 1);
            ans = max(currArea, ans);
        }
        return ans;
    }
};