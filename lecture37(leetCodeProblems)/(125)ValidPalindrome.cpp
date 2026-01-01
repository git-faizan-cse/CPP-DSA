class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for(char c : s){
            if(isalnum(c)) clean += tolower(c);
        }

        int st = 0, end = clean.length() - 1;

        while(st < end){
            if( clean[st] != clean[end]){
                return false;
            }
            st++;
            end--;
        }

        return true;
    }
};