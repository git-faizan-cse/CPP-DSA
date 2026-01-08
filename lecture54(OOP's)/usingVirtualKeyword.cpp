#include <iostream>
#include <string>


using namespace std;

class Person{
  public:
    virtual void show(int x){
        cout << x << endl;
        
    }
};
class Student : public Person{
    public:
    void show(int x){
        x = x + 10;
        cout << x << endl;
    }
};

int main(){
    Student s1;
    s1.show(10);
    
    return 0;
}