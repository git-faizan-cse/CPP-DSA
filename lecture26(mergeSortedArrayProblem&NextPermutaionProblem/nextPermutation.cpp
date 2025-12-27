#include <iostream>
#include <vector>

using namespace std;

void reverseArr(vector<int> &nums, int st){
    int end = nums.size() - 1;
    while(st < end){
        swap(nums[st],nums[end]);
        st++;
        end--;
    }

}

void nextPermutation(vector<int> &nums){
    int n = nums.size();
    int piv = -1;

    for(int st = n - 1; st > 0; st--){
        if(nums[st-1] < nums[st]){
            piv = st - 1;
            break;
        }
    }
    
    if(piv == -1){
        reverseArr(nums,0);
        return;
    }

    for(int i = n - 1; i > piv; i--){
        if(nums[i] > nums[piv]){
            swap(nums[i],nums[piv]);
            break;
        }
    }

    reverseArr(nums, piv+1);
}

// void nextPermutation(vector<int> &nums){
//     int n = nums.size();
//     int st = n-1, end = 0, piv = -1;
//     while(st > end){
//         if(nums[st - 1] < nums[st]){
//             piv = st - 1;

//                 if (nums[n-1] > nums[piv]){
//                     swap(nums[st-1],nums[n-1]);
//                         break;
//                 }else{
//                 for (int i = n - 1; i > piv; i--) {

//                         if (nums[i] > nums[piv]) {
//                             swap(nums[i], nums[piv]);
//                             break;
//                         }
//                     }
//                 }

//             break;
//         }else {
//             st--;
//         }
//     }

//     if(piv == -1){
//         reverseArr(nums,0);
//     }else{
//         reverseArr(nums,piv + 1);
//     }
// }

int main(){
    vector<int> arr = {1, 2, 3, 6, 5, 4};

    nextPermutation(arr);
    
    for(int val : arr){
        cout << val << " ";
    }

    return 0;
}