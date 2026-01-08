#include <iostream>
#include <string>


using namespace std;

class Person{
  public:
    string name;
    int age;
};

class Student : public Person{
    public:
        int rollNo;
};
class Teacher : public Person{
    public:
        string subject;
        double salary;
    
};

int main(){
    
    return 0;
}