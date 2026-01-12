#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node* prev;
  
  Node(int val){
      data = val;
      next = prev = NULL;
  }
  
};
class doublyList{
    Node* head;
    Node* tail;
    public:
    doublyList(){
        head = tail = NULL;
    }
        
    void push_front(int val){
        Node* newNode = new Node(val);   
        if(head == NULL){
            head = tail = newNode;
        }else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    
    void print(){
        Node* temp = head;
        while( temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    void pop_back(){
        if(head == NULL){
            cout << "DLL is empty." << endl;
            return;
        }
        if(head == tail){
            delete tail;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
    void pop_front(){
        if(head == NULL){
            cout << "DLL is empty" << endl;
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
        
};
int main(){
    
    doublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    
    // push back
    dll.push_back(5);
    dll.push_back(6);
    
    dll.print();
    
    dll.pop_back();
    dll.pop_front();
    dll.print();
    
    
    return 0;
}