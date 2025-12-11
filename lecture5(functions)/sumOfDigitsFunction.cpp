#include <iostream>
using namespace std;

// int sumOfDigits(int n){
//     int sum = 0;
//     for (n; n > 0; n = n/10){
//         int x = n%10;
//         sum += x;
//     }
//     return sum;
// }

// int main(){
//     int num = 1234;
//     cout << sumOfDigits(num);
    
//     return 0;
// }

int sumOfDigitsOfNum (int n){
    int sum = 0;
    
    while(n > 0){
        int x = n % 10;
        sum += x;
        n = n / 10;
    }
    
    return sum;
}
int main(){
    int num = 123456;
    cout << sumOfDigitsOfNum(num);
    return 0;
}