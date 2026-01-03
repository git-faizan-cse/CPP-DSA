#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int> &nums, int st, int mid, int end){
    vector<int> temp;
    int i = st, j = mid + 1;
    
    while( i <= mid && j <= end){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j <= mid){
        temp.push_back(nums[j]);
        j++;
    }
    for(int idx = 0; idx < temp.size(); idx++){
        nums[st + idx] = temp[idx];
    }
}
void mergeSort(vector<int> &nums, int st, int end){
    if( st < end){
    
    int mid = st + (end -st)/2;
    
    //left
    mergeSort(nums, st, mid);
    
    //right
    mergeSort(nums, mid + 1, end);
    
    merge(nums, st, mid, end);
    
    }
}
int main(){
    vector<int> nums = {12, 31, 35, 8, 32, 17};
    mergeSort(nums, 0 , 5);
    for(int val : nums){
        cout << val << " ";
    }
    return 0;
}