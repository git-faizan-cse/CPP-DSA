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

Node* buildTree(vector<int> &preOrder, int idx){
    idx++;
    if(preOrder[idx] == -1) return NULL;
    
    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder, idx);
    root->right = buildTree(preOrder, idx);
    
    return root;
}

void preOrder(Node *root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    ans.push_back(root->data);
    
    preOrder(root->left, ans);
    preOrder(root->right, ans);
    
}

int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> preorder2 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root1 = buildTree(preorder1, -1);
    Node* root2 = buildTree(preorder2, -1);
    
    vector<int> result1;
    preOrder(root1, result1);
    
    vector<int> result2;
    preOrder(root2, result2);
    if(result1 == result2){
        cout << "Identical" << endl;
    }else{
        cout << "Not Identical" << endl;
    }
    
    
    return 0;
}