#include <iostream>
using namespace std;

void printOneToN(int n){
    // base case
    if(n == 0){
        return;
    }
    // recursive case
    printOneToN(n - 1);
    cout << n << " ";
}

int main(){
    int n = 10;
    printOneToN(n);
    return 0;
}