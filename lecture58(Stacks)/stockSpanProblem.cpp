#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<int> findSpan(vector<int> &values){
    vector<int> ans;
    stack<int> indexes;
    
    for(int i = 0; i < values.size(); i++){
        while(indexes.size() > 0 && values[i] >= values[indexes.top()]){
            indexes.pop();
        } 
        if(indexes.empty()){
            ans.push_back(i+1);
            indexes.push(i);
        }else if (values[i] <= values[indexes.top()] ){
            ans.push_back(i-indexes.top());
            indexes.push(i);
        }
        
    }
    return ans;
}

int main(){
    vector<int> values = {100,80,60,70,60,75,85};
    
    vector<int> ans = findSpan(values);
    for(int i : ans){
        cout << i <<" ";
    }
    return 0;
}