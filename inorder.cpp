class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
    void rooting(Node*root , vector<int>& a){
        if(root==NULL){
            return;
        }
        rooting(root->left,a);
        a.push_back(root->data);
        rooting(root->right,a);
    }
    
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        rooting(root,ans);
        return ans;
    }
    
    
    
    
};