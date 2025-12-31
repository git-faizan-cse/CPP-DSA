#include <iostream>
using namespace std;

int factorial(int n) {
    // base case
    if(n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void viewFactorial(int n){
    if (n == 1){
        cout << 1 << endl;
        return;
    }
    
    viewFactorial(n - 1);
    cout << n <<endl;
}

int main() {
    int n = 5;

    cout << factorial(n) << endl;;
    viewFactorial(n);
    return 0;
}