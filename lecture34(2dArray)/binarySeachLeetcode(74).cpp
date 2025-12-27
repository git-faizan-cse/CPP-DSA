class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st = 0, end = matrix.size() - 1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(matrix[mid][0] <= target && target <= matrix[mid][matrix[mid].size() - 1]){
                // using iterative method
                // for(int j = 0; j < matrix[mid].size(); j++){
                //     if(matrix[mid][j] == target){
                //         return true;
                //     } 

                // return false;

                // using binary seach again inside;
                int l = 0 , r = matrix[mid].size() - 1;
                while(l <= r){
                    int m = l + (r - l)/2;
                    if(matrix[mid][m] == target) return true;
                    else if(matrix[mid][m] < target) l = m + 1;
                    else r = m - 1;
                }
                return false;

            }else if(target < matrix[mid][0]){
                end = mid - 1;
            }else {
                st = mid + 1;
            }
        }
        return false;
    }
};