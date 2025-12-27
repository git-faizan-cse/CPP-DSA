#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char> &chars){
    int n = chars.size();
    int idx = 0;
    for(int i = 0; i < n; i++){
        char ch = chars[i];
        int count = 0;
        while(i < n && ch == chars[i]){
            count++;
            i++;
        }

        if(count == 1){
            chars[idx++] = ch;
        }else {
            chars[idx++] = ch;
            string str = to_string(count);
            for(char ch : str){
                chars[idx++] = ch;
            }  
        }
     i--;   
    }
    return idx;
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int n = compress(chars);
    for(int i = 0; i < n; i++){
        cout << chars[i] << " ";
    }
    return 0;
}