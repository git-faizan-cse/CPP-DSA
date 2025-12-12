#include <iostream>

using namespace std;

// int main(){
//     int num = 42;
//     int ans = 0;
//     int pow = 1;

//     while (num > 0){
//         int rem = num % 2;
//         num = num / 2;

//         ans += (rem * pow);
//         pow = pow * 10;
//     }

//     cout << ans << endl;
//     return 0;
// }

int decToBinary(int num){
    int ans = 0, pow = 1;
    while ( num > 0 ){
        int rem = num % 2;
        num /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int decNum = 42;
    cout << decToBinary(decNum);
    return 0;
}
