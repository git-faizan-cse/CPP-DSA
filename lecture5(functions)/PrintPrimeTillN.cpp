#include <iostream>
using namespace std;

void printPrime(int n){
    for (int i = 0; i <= n; i++){
        if ( i == 0 || i == 1){
            continue;
        } 
        bool isPrime = true;

        for(int j = 2; j * j<= i ;j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << " ";
        }
    }
}

int main(){
    int n = 50;
    printPrime(n);
    return 0;
}