#include <iostream>
#include <string>


using namespace std;

class Person{
  public:
    string name;
    int age;
    
    Person(){
        cout << "default constructor."<< endl;
    }
    Person(string name, int age){
        this -> name = name;
        this -> age = age;
        cout << "parameterized constructor" << endl;
    }
    
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){
    
    Person p1;
    Person p2("faizan", 20);
    
    return 0;
}