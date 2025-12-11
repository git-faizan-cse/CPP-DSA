#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}


int nCr(int n, int r){

    int coeff = factorial(n) / (factorial(r) * factorial((n-r)));

    return coeff;
}
int main(){
    int n = 8, r = 2;
    cout << nCr(n,r);
    return 0;
}