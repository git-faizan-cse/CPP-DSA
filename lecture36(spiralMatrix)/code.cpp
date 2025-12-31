#include <iostream>

using namespace std;

void spiralOrder(int matrix[][4], int rows, int cols){
    int srow = 0, erow = rows - 1, scol = 0, ecol = cols - 1;
    while (erow >= srow && ecol >= scol){
        // if(erow == srow || ecol == scol){
        //     for(int i = scol; i < ecol; i++){
        //     cout << matrix[srow][i] << " ";
        //     break;
        // }
        // }
        // top
        for(int i = scol; i <= ecol; i++){
            cout << matrix[srow][i] << " ";
        }
        // right
        for (int j = srow+1; j <= erow; j++){
            cout << matrix[j][ecol] << " ";
        }
        // bottom
        for (int i = ecol - 1; i >= scol; i--){
            cout << matrix[erow][i] << " ";
        }
        // left
        for (int j = erow - 1; j >= srow + 1; j--){
            cout << matrix[j][scol] << " ";
        }

        srow++; erow--; scol++; ecol--;
    }
}

int main(){
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int rows = 4;
    int cols = 4;

    spiralOrder(matrix,rows,cols);


    return 0;
}