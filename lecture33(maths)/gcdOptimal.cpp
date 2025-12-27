#include <iostream>

using namespace std;

int findgcd(int a, int b){
    while( b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main (){
    int a = 20, b = 28;
    int gcd = findgcd(a,b);
    cout << gcd;
    return 0;
} 