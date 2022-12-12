class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;
        if(!root->left && !root->right)return (targetSum == root->val);
        bool pathExist = false;
        if(root->left)pathExist = hasPathSum(root->left,targetSum-root->val);
        if(root->right)pathExist = pathExist || hasPathSum(root->right,targetSum-root->val);
        return pathExist;
    }
};