#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> &nums, int maxAllowedPages, int books , int studs){
    int stu = 1, pages = 0;

    for(int i = 0; i < books; i++){
        if(nums[i] > maxAllowedPages){
            return false;
        }

        if(pages + nums[i] <= maxAllowedPages){
            pages += nums[i];
        }else{
            stu++;
            pages = nums[i];
        }
    }
    
    return stu > studs ? false : true;
}

int allocateBooks(vector<int> &nums, int books, int stud){

    if(stud > books){
        return -1;
    }

    int sum = 0;
    for(int val : nums){
        sum += val;
    }
    int st = 0, end = sum;
    int ans = -1;

    while(st<=end){
        int mid = st + (end - st)/2;

        if(isValid(nums,mid,books,stud)){
            ans = mid;
            end = mid - 1;
        }else{ 
            st = mid + 1;
        }
    }

    return ans;

}


int main(){
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}