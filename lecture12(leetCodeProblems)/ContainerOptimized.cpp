#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    int maxArea = 0;
    int left = 0;
    int right = n - 1;

    while(left < right){
        int wid = right - left;
        int ht = min(height[left],height[right]);
        int currArea = wid * ht;
        maxArea = max(maxArea,currArea);
        if(height[right] >= height[left]){
            left++;
        }
        else{
            right--;
        }
    }
    cout << maxArea;
    return 0;
}