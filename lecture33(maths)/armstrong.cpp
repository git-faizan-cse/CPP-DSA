#include <iostream>

using namespace std;
bool isArmstrong(int n){
    if(n == 0) return true;
    int original = n;
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += (digit*digit*digit);
        n = n / 10;
    }

    return sum == original;
    // return sum == original ? true : false; 
//     if(sum == original){
//         return true;
//     }else {
//         return false;
//     }
}

int main(){
    int n = 371;

    if(isArmstrong(n)){
        cout << n << " is an armstrong number. \n";
    }else{
        cout << n << " is Not an armstrong number. \n";
    }
    return 0;
}