#include <iostream>
using namespace std;

bool isFound(int matrix[][4], int rows, int cols, int target){
    int st = 0;
    int end = rows - 1;

    while(st <= end){
        int mid = st + (end - st)/2;
        if( matrix[mid][0] <= target && target <= matrix[mid][cols-1]){
            for(int j = 0; j < cols; j++ ){
                if(matrix[mid][j] == target){
                    return true;
                }
            }
            return false;
        }else if(target < matrix[mid][0]){
            end = mid - 1;
        }else {
            st = mid + 1;
        }
    }

    return false;
}

int main(){
    int matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int rows = 3, cols = 4;
    int target = 20;

    bool found = isFound(matrix,rows,cols, target);

    if(found){
        cout << "Element is Present";
    }else{
        cout << "Element is Not Present";
    }

    return 0;
}