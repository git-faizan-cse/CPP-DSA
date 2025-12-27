#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseWords(string s){
    reverse(s.begin(),s.end());
    int n = s.length();
    string ans = "";

    for (int i = 0; i < n; i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i];
            i++;
        }

        if(word.length() > 0){
            reverse(word.begin(),word.end());
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main(){

    string s = "the sky is blue";
    string reversed = reverseWords(s);
    cout << reversed;
    return 0;
}