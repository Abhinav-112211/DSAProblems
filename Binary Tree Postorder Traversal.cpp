class Solution {
public:
    vector<int> postorder(TreeNode* root,vector<int>&list){
        if(root==NULL)return list;
        postorder(root->left,list);
        postorder(root->right,list);
        list.push_back(root->val);
        return list;
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>list;
        return postorder(root,list);
    }
};