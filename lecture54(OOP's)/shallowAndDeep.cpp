#include <iostream>
#include <string>
using namespace std;

class Student {

    public:
    string name;
    float *cgpaPtr;

    Student(string name, float cgpa){
        this->name = name;
        cgpaPtr = new float; // dynamic memory allocation
        *cgpaPtr = cgpa;
    }
    
    Student(Student &s){ // default copy constructor shallow copy
        cout << "I am default copy constructor" << endl;
        this->name = s.name;
        cgpaPtr = new float; // allocating new memory to avoid shallow copy issue
        *this->cgpaPtr = *(s.cgpaPtr); 
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Faizan", 7.6);
    s1.getInfo();

    Student s2 = s1; // default copy constructor called
    *(s2.cgpaPtr) = 9.2;
    s2.name = "Ali";

    // because of shallow copy both objects point to same memory location
    s1.getInfo();
    s2.getInfo();

    return 0;
}