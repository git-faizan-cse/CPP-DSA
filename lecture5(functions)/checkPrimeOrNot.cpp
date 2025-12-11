#include <iostream>
using namespace std;

void IsPrime(int n){
    for (int i = 2; i < n / 2; i++){
        if( n % i == 0){
            cout << n <<" is NOT a Prime Number.";
            return;
        }
    }
    cout << n <<" is a Prime Number.";
    return;
}

int main(){
    int n = 1;
    IsPrime(n);
    return 0;
}