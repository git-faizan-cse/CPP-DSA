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
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front(){
        if(head == NULL){
            cout << "LL is empty";
            return;
        }
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        
        
    }
    void pop_back(){
        if(head == NULL){
            cout << "LL is empty";
            return;
        }
        Node*temp = head;
        while(temp-> next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp; 
        
    }
    
    
    void push_front(int val){
        Node* newNode = new Node(val); // dynamic 
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    
    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid Position" << endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Invalid Position" << endl;
                return;
            }
            temp = temp->next;
        }
        
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        
        
    }
    int search(int val){
        Node* temp = head;
        int idx = 0;
        cout << endl;
        while ( temp != NULL){
            if(temp-> data == val){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    void printLL() {
        Node* temp = head;
        
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        
    }
};

int main(){
    List ll;
    
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    
    ll.push_back(4);
    ll.push_back(5);
    
    ll.insert(10, 2);
    
    ll.pop_front();
    ll.pop_back();
    
    ll.printLL();
    
    cout << ll.search(1);
    
    
    return 0;
}