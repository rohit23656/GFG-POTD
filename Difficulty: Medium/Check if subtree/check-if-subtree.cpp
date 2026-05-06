/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  // Helper to check if two trees are identical
    bool isIdentical(Node* a, Node* b) {
        if (!a && !b) return true;
        if (!a || !b) return false;
        return (a->data == b->data) &&
               isIdentical(a->left, b->left) &&
               isIdentical(a->right, b->right);
    }
    bool isSubTree(Node *root1, Node *root2) {
       if (!root2) return true;   // empty tree is always a subtree
        if (!root1) return false;  // non-empty root2 cannot be in empty tree
        
        // Check if current node matches root2, or recursively search left/right
        if (isIdentical(root1, root2))
            return true;
        return isSubTree(root1->left, root2) || isSubTree(root1->right, root2);
    }
};