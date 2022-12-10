class Solution {
    public:
    vector<int> inorder(TreeNode* root,vector<int>&list){
        if(root==NULL)return list;
        inorder(root->left,list);
        list.push_back(root->val);
        
        inorder(root->right,list);
        return list;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>list;
        return inorder(root,list);
    }
};