class Solution {
public:
    void helper(vector<vector<int>>& image, int sr, int sc, int color, int n, int m, int src){
        if(sr < 0 || sc < 0 || sr >= n || sc >= m || image[sr][sc] != src){
            return;
        }

        image[sr][sc] = color;

        helper(image, sr-1, sc, color, n, m, src); // top
        helper(image, sr, sc+1, color, n, m, src); // right
        helper(image, sr+1, sc, color, n, m, src); // bottom
        helper(image, sr, sc-1, color, n, m, src); // left

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        int src = image[sr][sc];

        if(src == color)return image;

        helper(image, sr, sc, color, n, m, src);

        return image;

    }
};