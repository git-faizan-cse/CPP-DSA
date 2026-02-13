#include <iostream>
#include <vector>

using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  
  Node(int val){
      data = val;
      left = right = NULL;
  }
};

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    
    if(val < root->data){
        root->left = insert(root->left, val);
    }else {
        root->right = insert(root->right, val);
    }
    
    return root;
}

Node* buildBST(vector<int>& arr){
    Node* root = NULL;
    
    for(int val : arr){
        root = insert(root, val);
    }
    
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

 bool search(Node*root, int val){
    if(root == NULL){
        return false;
    } 
    if(root->data == val){
        return true;
    }
    if(val < root->data){
        return search(root->left, val);
    }else {
        return search(root->right, val);
    }
}

int main(){
    vector<int> arr = {3,2,1,5,6,4};
    
    Node* root = buildBST(arr);
    
    // insert(root, 0);
    
    inorder(root);
    cout << endl;
    int val = 6;
    bool isFound = search(root, val);
    if(isFound){
        cout << val << ": Element Found" << endl;
    }else {
        cout << val << ": Element Not Found" << endl;
    }
    
    return 0;
}