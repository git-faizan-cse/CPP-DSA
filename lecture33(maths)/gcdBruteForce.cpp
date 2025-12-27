#include <iostream>

using namespace std;

int findgcd(int a, int b){
    int gcd = 1;
    for(int i = 1; i <= min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int a = 20, b = 28;

    int gcd = findgcd(a,b);
    cout << gcd << endl;
    return 0;
}