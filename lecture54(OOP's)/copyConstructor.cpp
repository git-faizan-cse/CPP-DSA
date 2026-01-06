#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;
    //properties
    public:
    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy constructor
    Teacher(Teacher &t){ // pass by reference shallow copy
        cout << "I am custom copy constructor" << endl;
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }

    string name;
    string dept; 
    string subject;

    // methods // member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    // setter function
    void setSalary(double sal){
        salary = sal;
    }
    // getter function
    double getSalary(){
        return salary;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Teacher t1("Faiza", "Computer Science", "C++", 50000.0);

    Teacher t2(t1); // copy constructor called
    t2.getInfo();  


    return 0;
}