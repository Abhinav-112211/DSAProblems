class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0;
        int count_left = maxDepth(root->left);
        int count_right = maxDepth(root->right);
        return 1+max(count_left,count_right);
    }
};