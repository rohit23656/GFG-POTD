/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        if(root==nullptr)
        return 0;
        if(root->data>key)
     return search(root->left,key);
     else if(root->data<key)
     return search(root->right,key);
    else
     return 1;
    
    }
};