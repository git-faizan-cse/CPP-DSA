#include <iostream>
#include <string>


using namespace std;

class Person{
    public: 
    string name;
    int age;
    
    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }
    Person (){
        cout << "parent constructor. \n";
    }
    ~Person (){
        cout << "parent destructor. \n";
    }
};

class Student : public Person{
  public:
  int rollNo;
  
  Student (){
      cout << "child constructor. \n";
  }
  ~Student(){
      cout << "child destructor. \n";
  }
 
  void getInfo(){
      cout << "name: " << name << endl;
      cout << "age: " << age << endl;
      cout << "roll no: " << rollNo << endl;
  }
  
};
int main(){
    Student s1;
    s1.name = "Faizan";
    s1.age = 20;
    s1.rollNo = 007;
    
    s1.getInfo();
    
    return 0;
}