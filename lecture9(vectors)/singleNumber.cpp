#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val: nums){
        ans ^= val;
    }
    return ans;
}



int main(){
    vector<int> vec = {4, 1, 2, 1, 2, 2, 2};
    int uniqueElement = singleNumber(vec);
    cout << uniqueElement;
    return 0;
}