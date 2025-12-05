#include <iostream>

using namespace std;

int main() {
    // calculate factorial of a number n

    int n = 10;
    for (int j = 1; j <= n; j++) {
        int factorial = 1;
    for ( int i = 1; i <= j; i++ ) {
        factorial *= i;
    }
    cout << "Factorial of " << j << " is " << factorial << endl;
    }   
       
    return 0;
}
    