
#include <iostream>
#include <vector>

using namespace std;
class Node{
  public:
  int data;
  Node *left;
  Node *right;
  
  Node(int val){
      data = val;
      left = right = NULL;
  }
};
static int idx = -1;
Node* buildTree(vector<int> &preOrder){
    idx++;
    if(preOrder[idx] == -1){
        return NULL;
    }
    
    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    
    return root;
  }

void kthLevel(Node *root, int K){
    if( root == NULL){
        return;
    }
    if( K == 1){
        cout << root->data << endl;
        return;
    }
    
    kthLevel(root->left,K-1);
    kthLevel(root->right,K-1);
    
}


int main() {
    vector<int> preorder =  {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    
    kthLevel(root, 3);

    return 0;
}