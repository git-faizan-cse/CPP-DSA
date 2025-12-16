#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size(); // 5
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++ ){
            for(int i = st; i <=end; i++){
                cout << nums[i];
            }
            if(end != n-1){
            cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}