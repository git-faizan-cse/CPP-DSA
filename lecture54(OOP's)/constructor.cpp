#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;
    //properties
    public:
    Teacher(){ // always declared as public.| memory is allocated when object is created | non parameterized constructor
        dept = "Computer Science"; 
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
};

int main(){
    Teacher t1;
    t1.name = "Faiza";
    // t1.dept = "Computer Science";
    t1.subject = "C++";
    // t1.salary = 50000.0;
    t1.setSalary(50000.0);
    // t1.changeDept("Mathematics");

    cout << "Teacher Name: " << t1.name << endl;   
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    // cout << "Salary: " << t1.salary << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    Teacher t2;
    cout << "Department of t2: " << t2.dept << endl;

    return 0;
}