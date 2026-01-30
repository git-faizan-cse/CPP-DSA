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
Node* buildTree(vector<int> &preOrder){
    idx++;
    if(preOrder[idx] == -1) return NULL;
    
    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    
    return root;
}
int sumOfTree(Node *root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfTree(root->left);
    int rightSum = sumOfTree(root->right);
    
    return (leftSum + rightSum) + root->data;
    
}

int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    int sum = sumOfTree(root);
    cout << "Sum of the tree: " << sum << endl;
    
    return 0;
}