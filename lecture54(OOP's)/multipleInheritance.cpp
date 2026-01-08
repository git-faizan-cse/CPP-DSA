#include <iostream>
#include <string>


using namespace std;

class Student{
    public:
        string name;
        int rollNo;
};
class Teacher{
    public:
        string subject;
        double salary;
    
};

class TA : public Student, public Teacher{ 
        
};


int main(){
    TA t1;
    t1.name = "faizan";
    t1.rollNo = 20260007;
    t1.subject = "computer science";
    t1.salary = 50000;
    
    cout << "name: " << t1.name << endl;
    cout << "Roll No: " << t1.rollNo << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;
    
    return 0;
} 