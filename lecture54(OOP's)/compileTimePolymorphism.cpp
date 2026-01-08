#include <iostream>
#include <string>


using namespace std;

class Person{
  public:
    void show(int x){
        cout << x << endl;
        
    }
    void show(char ch){
        cout << ch << endl;
    
    }
};

int main(){
    Person p1;
    p1.show(10);
    p1.show('X');
    
    return 0;
}