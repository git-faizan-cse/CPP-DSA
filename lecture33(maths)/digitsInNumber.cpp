#include <iostream>
#include <cmath>

using namespace std;

void printDigits(int n){
    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    while( n > 0){
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }

}
void numberOfDigits(int n){
    if (n == 0) {
        cout << "No of digits: 1" << endl;
        return;
    }
    int count = 0;
    while(n > 0){
        // int digit = n % 10;
        count++;
        n = n / 10;
    }
    cout << "No. of digits: " << count << endl;
}

void sumOfDigits(int n){
    int sum = 0;
    while(n > 0 ){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << "Sum of digits in No.: " << sum << endl;
}
void productOfDigits(int n){
    if (n == 0) {
        cout << "Product of digits in No.: 0" << endl;
        return;
    }
    int prod = 1;
    while ( n > 0){
        int digit = n % 10;
        prod *= digit;
        n = n / 10;
    }
    cout << "Product of digits in No.: " << prod << endl;
}
int main(){
    int n = 3586;
    printDigits(n);
    numberOfDigits(n);
    sumOfDigits(n);
    productOfDigits(n);

    cout << (int)(log10(n) + 1) << endl;

    return 0;
}