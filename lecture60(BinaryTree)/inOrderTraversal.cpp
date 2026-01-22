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
static int idx = -1;
Node* buildTree(vector<int>& preOrder){
    idx++;
    if(preOrder[idx] == -1) return NULL;
    
    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        // we can comment it down if we dont want -1
        // cout << -1 << ",";
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
        
    return;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    inOrder(root);
    
    return 0;
}