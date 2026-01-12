#include <iostream>
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
class CircularList{
    Node* head;
    Node* tail;
  public:
    CircularList(){
        head = tail = NULL;
    }
    
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next=head;
    }
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
    void deleteAtTail(){
        if(head == NULL){
            cout << "Circular List is Empty" << endl;
            return;
        }
        if(head == tail){
            delete tail;
            head = tail = NULL;
            return;
        }
        Node*temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = head;
        
    }
    
    void deleteAtHead(){
        if(head == NULL) {
            cout << "Circular List is Empty" << endl;
            return;
        }
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node*temp = head;
        head = temp->next;
        tail->next = head;
        delete temp;
        
    }
    
    void print(){
        if(head == NULL) return;
        
        cout << head->data << "->";
        Node* temp = head->next;
        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
    
    
};
int main(){
    CircularList cll;
    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);
    cll.insertAtHead(4);
    
    cll.insertAtTail(10);
    cll.insertAtTail(11);
    cll.insertAtTail(12);
    
    cll.print();
    
    cll.deleteAtHead();
    cll.deleteAtTail();
    
    cll.print();
    return 0;
}