#include <iostream> 
#include <vector>

using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
    public: 
    Queue(){
        head = NULL;
        tail = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(empty()){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }

    }

    void pop(){
        if(!empty()){
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
        }
    }

    int front(){
        if(!empty()){
            return head->data;
        }
        return -1; // or throw an exception
    }

    bool empty(){
        return head == NULL;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    // while (!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    cout << q.front() << endl; // 10
    q.pop();
    cout << q.front() << endl; // 20
    q.pop();
    cout << q.front() << endl; // 30
    q.pop();
    cout << q.empty() << endl; // 1 (true)
    return 0;
}