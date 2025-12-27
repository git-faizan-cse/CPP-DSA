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
int findLcm(int a, int b){
    int lcm = ( a / findgcd(a,b)) * b;
    return lcm;
}

int main (){
    int a = 20, b = 28;
    int lcm = findLcm(a,b);
    cout << lcm;
    return 0;
} 