#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int> &nums){
    int n = nums.size();

    for(int i = 0; i < n - 1; i++){
        int temp = i;
        for(int j = i; j < n; j++){
            if(nums[j] < nums[temp]){
                temp = j;
            }
        }

        swap(nums[i],nums[temp]);
        
    }
}

int main(){
    vector<int> arr = {4, 1, 5, 2, 3};

    SelectionSort(arr);
    for(int val : arr){
        cout << val << endl;
    }
    return 0;
}