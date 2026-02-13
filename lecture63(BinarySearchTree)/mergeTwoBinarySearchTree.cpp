#include <iostream>
#include <vector>

using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int data){
        val = data;
        left = right = NULL;
    }
};
TreeNode* insert(TreeNode* root, int val){
    if(root == NULL){
        return new TreeNode(val);
    }
    
    if(val < root->val){
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    
    return root;
}

TreeNode* buildBST(vector<int>& arr){
    TreeNode* root = NULL;
    
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

void inOrder(TreeNode* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
    
}
void inorder(vector<int>& arr, TreeNode* root){
    if(root == NULL){
        return;
    }    
    inorder(arr, root->left);
    arr.push_back(root->val);
    inorder(arr, root->right);
}
TreeNode* buildBSTfromSorted(vector<int>& arr,int st,int end){
    if(st > end){
        return NULL;
    }
    int mid = st+(end-st)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = buildBSTfromSorted(arr, st, mid-1);
    root->right = buildBSTfromSorted(arr, mid+1, end);
    
    return root;
}

TreeNode* merge2BST(TreeNode* root1, TreeNode* root2){
    vector<int> arr1, arr2;
    inorder(arr1, root1);
    inorder(arr2, root2);
    
    vector<int> temp;
    int i,j;
    i = j = 0;
    
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            temp.push_back(arr1[i++]);
        } else {
            temp.push_back(arr2[j++]);
        }
    }
    while( i < arr1.size()){
        temp.push_back(arr1[i++]);
    }
    while( j < arr2.size()){
        temp.push_back(arr2[j++]);
    }
    
    return buildBSTfromSorted(temp, 0, temp.size()-1);
}

int main(){
    vector<int> arr1 = {8, 2, 1, 10};
    vector<int> arr2 = {5, 3, 0};
    
    TreeNode* root1 = buildBST(arr1);
    TreeNode* root2 = buildBST(arr2);
    cout << "Sorted Tree1: ";
    inOrder(root1);
    cout << endl;
    cout << "Sorted Tree2: ";
    inOrder(root2);
    cout << endl;
    
    TreeNode* root = merge2BST(root1, root2);
    vector<int> seq;
    cout << "Sorted Both Trees: ";
    inOrder(root);
    cout << endl;

    return 0;
}