class Solution {
public:
    bool isPalindrome(string s){
        int st = 0, end = s.size() -1;
        while (st < end){
            if(s[st] != s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    void getAllPartitions( string s, vector<string> &partition, vector<vector<string>> &ans){
        if(s.size() == 0){
            ans.push_back({partition});
            return;
        }

        for(int i = 0; i < s.size(); i++){
            string part = s.substr(0,i+1);
            if(isPalindrome(part)){
                partition.push_back(part);
                getAllPartitions(s.substr(i+1), partition, ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;

        getAllPartitions(s, partition, ans);

        return ans;
    }
};