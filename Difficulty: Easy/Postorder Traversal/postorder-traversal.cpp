/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    void postorder(Node*root,vector<int>&ans){
        if(root == NULL) return;
        
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};