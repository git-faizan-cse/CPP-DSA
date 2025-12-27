#include <iostream>
#include <climits>

using namespace std;

int findSum(int matrix[][3], int rows, int cols){
    if(rows != cols) return -1;
    int maxSum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                maxSum += matrix[i][j];
            }
        }
    }
    return maxSum;
    
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    int sum = findSum(matrix,rows,cols);

    cout << sum ;

    
    return 0;
}