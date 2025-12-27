#include <iostream>
#include <vector>

using namespace std;

int findSum(vector<vector<int>> &matrix){
    int n = matrix.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += matrix[i][i];
        sum += matrix[i][n-1-i];
    }

    if(n%2 != 0){
        sum -= matrix[n/2][n/2];
    }

    return sum;
}

int main() {
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> matrix2 = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int>> matrix3 = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    cout << "Matrix1 diagonals sum: " << findSum(matrix1) << endl;
    cout << "Matrix2 diagonals sum: " << findSum(matrix2) << endl;
    cout << "Matrix3 diagonals sum: " << findSum(matrix3) << endl;

    return 0;
}