#include <iostream>
#include <string>


using namespace std;

void func2(){
    static int x = 0;
    cout << "x: " << x << endl;
    x++;
}
void func(){
    int x = 0;
    cout << "x: " << x << endl;
    x++;
}

int main(){
    func();
    func();
    func();
    cout << " now lets see static keyword \n";
    func2();
    func2();
    func2();
    
    return 0;
}