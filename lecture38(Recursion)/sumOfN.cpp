#include <iostream>
using namespace std;

int sumOfN(int n){
    // base case
    if ( n == 1){
        return 1;
    }

    return n + sumOfN(n - 1);
}

int main(){
    int n = 14;

    cout << sumOfN(n) << endl;

    return 0;
}