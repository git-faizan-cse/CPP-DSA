// #include <iostream>
// using namespace std;

// int factorial (int n){
//     cout << n << endl;
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact *= i;
//     }
//     cout << "fact inside function:" << fact << endl;
//     return fact;
// }

// int main(){
//     float n, r, coeff;
//     cout << "Enter n and r";
//     cin >> n >> r;

//     coeff = factorial(n) / (factorial(r) * factorial((n - r)) );
//     cout << coeff << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

float factorial(float n){
    float fact = 1;
    for (float i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    float n = 10, r = 2, coeff;

    coeff = factorial(n) / (factorial(r)* factorial((n - r)) );

    cout << coeff << endl;
    return 0;
}