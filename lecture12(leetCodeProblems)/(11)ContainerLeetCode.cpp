class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea= 0, lp = 0, rp = height.size() - 1;

        while(lp < rp){
            maxArea = max(maxArea,(rp - lp)* min(height[lp],height[rp]));
            
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxArea;
    }
};