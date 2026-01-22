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

void preOrder(Node* root){
    // also we can save these values in vector here for understanding we are not using.
    if(root == NULL){
        // we can comment it down if we dont want -1
        // cout << -1 << ",";
        return;
    }
    cout << root->data << " ";
    
    preOrder(root->left);
    preOrder(root->right);
        
    return;
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    preOrder(root);
    
    return 0;
}