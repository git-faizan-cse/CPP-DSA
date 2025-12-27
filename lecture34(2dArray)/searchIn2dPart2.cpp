#include <iostream>

using namespace std;

bool isFound(int matrix[][5], int rows, int cols, int target){
    int r = 0, c = cols - 1;
    while(c >= 0 && r < rows){
        if(target == matrix[r][c]){
            return true;
        }else if(target < matrix[r][c]){
            c--;
        }else{
            r++;
        }
    }
    return false;

}

int main(){
    int matrix[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int rows = 5, cols = 5;
    int target = 5;

    bool found = isFound(matrix,rows,cols, target);

    if(found){
        cout << "Element is Present";
    }else{
        cout << "Element is Not Present";
    }

    return 0;
}