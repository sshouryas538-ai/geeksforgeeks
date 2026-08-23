/* Structure of Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
  
    void preorder(Node*root,vector<int>&ans){
        if(root == NULL) return;
        
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        preorder(root,ans);
        return ans;
    }
};