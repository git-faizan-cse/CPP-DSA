#include <iostream>

using namespace std;

int main(){
    int n = 6;
    int max = 64 + n;
    for (int i = 64; i < max; i++){
        for (int j = i + 1; j > 64; j--){
            cout << char(j) << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     char ch = 'A';

//     for (int i = 0; i < 5; i++) {
//         char temp = 'A' + i;
//         for (char c = temp; c >= 'A'; c--) {
//             cout << c << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }