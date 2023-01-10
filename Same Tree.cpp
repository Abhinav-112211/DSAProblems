class Solution {
public:
    void inorder(TreeNode*root,vector<int>&v){
        if(root!=NULL){
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }else{
            v.push_back(100000);
        }
    }
    void preorder(TreeNode*root,vector<int>&v){
        if(root!=NULL){
            v.push_back(root->val);
            preorder(root->left,v);
            preorder(root->right,v);
        }else{
            v.push_back(100000);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>iop,ioq,pop,poq;
        inorder(p,iop);
        inorder(q,ioq);
        preorder(p,pop);
        preorder(q,poq);
        if(iop==ioq && pop==poq)return true;
        else return false;
    }
};