class Solution {
public:
    vector<int> preorder(TreeNode* root,vector<int>&list){
        if(root==NULL)return list;
        list.push_back(root->val);
        preorder(root->left,list);
        preorder(root->right,list);
        return list;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>list;
        return preorder(root,list);
    }
};