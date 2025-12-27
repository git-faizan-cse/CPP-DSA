#include <iostream>
#include <vector>

using namespace std;

void mergeSortedArray(vector<int> &A, int aSize, vector<int> &B, int bSize){
    int index = aSize + bSize - 1;
    int i = aSize - 1;
    int j = bSize - 1;

    while (j >= 0) {
    if (i >= 0 && A[i] > B[j]) {
        A[index] = A[i];
        i--;
    } else {
        A[index] = B[j];
        j--;
    }
    index--;
}

    
}

int main(){
    vector<int> A = {1,2,3,0,0,0};
    vector<int> B = {2,5,6};
    int aSize = 3;
    int bSize = 3;
    mergeSortedArray(A, aSize, B, bSize);

    for(int val : A){
        cout << val << " ";
    }
    return 0;
}