#include <iostream>
#include <vector>

using namespace std;

class Stack{
    vector<int> v;
    
    public:
    void push(int val){
        v.push_back(val);
    }
    
    void pop(){
        v.pop_back();
    }
    
    void top(){
        if(v.empty()){
            return;
        }
        cout <<  v[v.size()-1] << endl;
        return;
    }
    bool empty(){
        return v.size() == 0;
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