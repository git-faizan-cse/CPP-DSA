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

    cout << "Teacher Name: " << t1.name << endl;   
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    // cout << "Salary: " << t1.salary << endl;
    cout << "Salary: " << t1.getSalary() << endl;
    
    cout << "Using getInfo method:" << endl;
    t1.getInfo();


    return 0;
}