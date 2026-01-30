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

bool isIdentical(Node* p, Node* q){
    if( p == NULL || q == NULL){
        return p == q;
    }
    
    bool isLeftSame = isIdentical(p->left, q->left);
    bool isRightSame = isIdentical(p->right, q->right);
    
    return isLeftSame && isRightSame && p->data == q->data;
}

int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> preorder2 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root1 = buildTree(preorder1, -1);
    Node* root2 = buildTree(preorder2, -1);

    isIdentical(root1,root2) == 1 ? cout<<"Identical" : cout <<"Not Identical";
    
    return 0;

}