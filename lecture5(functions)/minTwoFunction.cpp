#include <iostream>
using namespace std;

int minOfTwo(int a, int b){ // returnType functionName(parameters)
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout << minOfTwo(5,10); // functionName(arguments)
    return 0;
}