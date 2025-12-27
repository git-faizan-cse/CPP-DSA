#include <iostream>

using namespace std;

int reverseNumber(int n){
    int sum = 0;
    while(n!=0){
        int digit = n % 10;
        sum = sum * 10 + digit;
        n = n / 10; 
    }
    return sum;
}

int main(){
    int n = 4537;
    int reversed = reverseNumber(n);
    cout << reversed;
    return 0;
}