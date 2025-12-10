#include <iostream>
using namespace std;

int sumTill(int n){
    int sum = 0;
    for ( int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    cout << sumTill(8);
    return 0;
}