#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Stack{
    list<int> ll;
    
    public:
    void push(int val){
        ll.push_front(val);
    }
    
    void pop(){
       ll.pop_front();
    }
    
    void top(){
        if(ll.empty()){
            return;
        }
        cout <<  ll.front() << endl;
        return;
    }
    bool empty(){
        return ll.size() == 0;
    }
};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    
    while(!s1.empty()){
        s1.top();
        s1.pop();
    }
    return 0;
}