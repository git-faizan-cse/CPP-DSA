#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    double salary;
    //properties
    public:
    string name;
    string dept;
    string subject;

    // methods // member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    t1.name = "Faiza";
    t1.dept = "Computer Science";
    t1.subject = "C++";
    // t1.salary = 50000.0;
    t1.changeDept("Mathematics");

    cout << "Teacher Name: " << t1.name << endl;   
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    // cout << "Salary: " << t1.salary << endl;



    return 0;
}