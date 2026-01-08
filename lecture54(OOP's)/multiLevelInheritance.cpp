#include <iostream>
#include <string>


using namespace std;

class Person{
    public: 
    string name;
    int age;
    
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
  public:
  int rollNo;
  
  Student (string name, int age, int rollNo) : Person(name, age){
      this-> rollNo = rollNo;
  }
 
  void getInfo(){
      cout << "name: " << name << endl;
      cout << "age: " << age << endl;
      cout << "roll no: " << rollNo << endl;
  }
  
};

class GradStudent : public Student{
  public:
  string area;
  
  GradStudent(string name, int age, int rollNo, string area) : Student(name, age, rollNo){
      this -> area = area;
  }
  
  void getInfo(){
      cout << "name: " << name << endl;
      cout << "age: " << age << endl;
      cout << "roll no: " << rollNo << endl;
      cout << "Research Area: " << area << endl;
  }
};
int main(){
    GradStudent gs1("hello", 22, 20260007, "computer science" );
    gs1.getInfo();
    
    return 0;
}