#include <iostream>

using namespace std;

int main() {
    // sum of all numbers from 1 to n which are divisible by 3

    int n = 10;
    int sum = 0;
    for (int i = 1; i <=n; i++) {
        if ( i % 3 == 0 ) {
            sum += i;
        }
    }
    cout << "Sum: " << sum << endl;

    return 0;
}
