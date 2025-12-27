#include <iostream>
#include <climits>

using namespace std;
int findSum(int matrix[][5], int rows, int cols){
    if(rows != cols) return -1;
    
    int sum1 = 0;
    for(int i = 0; i < rows; i++){
        sum1 += matrix[i][i];
    }

    int i = rows - 1, j = 0 , sum2 = 0;
    while(i >= 0 && j < cols){
        sum2 += matrix[i][j];
        i--;
        j++;
    }
    
    int maxSum = sum1 + sum2;
    if(rows % 2 != 0){
        int idx = rows / 2;
        maxSum = maxSum - matrix[idx][idx];
    }
    return maxSum;
    
}
int findSum(int matrix[][4], int rows, int cols){
    if(rows != cols) return -1;
    
    int sum1 = 0;
    for(int i = 0; i < rows; i++){
        sum1 += matrix[i][i];
    }

    int i = rows - 1, j = 0 , sum2 = 0;
    while(i >= 0 && j < cols){
        sum2 += matrix[i][j];
        i--;
        j++;
    }
    
    int maxSum = sum1 + sum2;
    if(rows % 2 != 0){
        int idx = rows / 2;
        maxSum = maxSum - matrix[idx][idx];
    }
    return maxSum;
    
}

int findSum(int matrix[][3], int rows, int cols){
    if(rows != cols) return -1;
    
    int sum1 = 0;
    for(int i = 0; i < rows; i++){
        sum1 += matrix[i][i];
    } 

    int i = rows - 1, j = 0 , sum2 = 0;
    while(i >= 0 && j < cols){
        sum2 += matrix[i][j];
        i--;
        j++;
    }
    
    int maxSum = sum1 + sum2;
    if(rows % 2 != 0){
        int idx = rows / 2;
        maxSum = maxSum - matrix[idx][idx];
    }
    return maxSum;
    
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix3[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    int rows = 3;
    int cols = 3;

    int sum = findSum(matrix,rows,cols);
    int sum2 = findSum(matrix2,rows+1,cols+1);
    int sum3 = findSum(matrix3, rows + 2, cols + 2);

    cout << sum << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;

    
    return 0;
}