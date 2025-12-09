#include <iostream>

using namespace std;

int main(){
    int n = 4;
    
    for (int i= 0; i < n; i++){
        for(int j = n; j > i + 1; j--){
            cout << " " ;
        }
        cout << "*";
        for( int j = 0; j < i ; j++){
            cout << " ";
        }
        for ( int j = 0; j < i - 1; j++){
            cout  << " ";
        }
        if ( i > 0){
            cout << "*";
        }
        cout << endl;
    }
}