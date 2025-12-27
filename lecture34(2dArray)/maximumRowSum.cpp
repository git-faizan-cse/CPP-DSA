#include <iostream>
#include <climits>

using namespace std;

int findSum(int matrix[][3], int rows, int cols){
    int maxSum = INT_MIN;
    for(int i = 0; i < rows; i++){
        int currSum = 0;
        for(int j = 0; j < cols; j++){
            currSum += matrix[i][j];
        }
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
    
}

int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int matrix2[4][3] = {{1,5,3},{5,2,6},{3,6,4},{3,5,3}};
    int rows = 4;
    int cols = 3;

    int sum = findSum(matrix,rows,cols);

    cout << sum ;

    
    return 0;
}