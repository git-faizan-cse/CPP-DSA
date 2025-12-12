#include <iostream>

using namespace std;

int binaryToDec(int num){
    int ans = 0, pow = 1;

    while ( num > 0 ){
        int rem = num % 10;
        num /= 10;

        ans += (rem*pow);
        pow *= 2;

    }
    return ans;
}

int main(){
    int biNum = 101010;
    cout << binaryToDec(biNum);
    return 0;
}