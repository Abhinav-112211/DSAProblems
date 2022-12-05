class Solution {
public:
    void preOrder(Node* root,vector<int>&ans){
        if(root==NULL)return;
        ans.push_back(root->val);
        for(auto child:root->children)preOrder(child,ans);
    }
public:
    vector<int> preorder(Node* root) {
        vector<int>ans;
        preOrder(root,ans);
        return ans;
    }
};