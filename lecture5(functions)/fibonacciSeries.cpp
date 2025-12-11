#include <iostream>
using namespace std;

// void fibonnaci(int n){
//     int a = 0;
//     int b = 1;
//     int lastTwo;

//     for (int i = 0; i <= n; i++){
//         if ( i == 0 ){
//             cout << a << " ";
//         }else if ( i == 1) {
//             cout << b << " ";
//         } else{
//             lastTwo = a + b;
//             cout << lastTwo << " ";
//             a = b;
//             b = lastTwo;

//         }
        
//     }
// }

void fibonacci(int n){
    int a = 0, b = 1;
    for (int i = 0; i <= n; i++){
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next; 
    }
}

int main(){
    int n = 8;
    fibonacci(n);
    return 0;
}