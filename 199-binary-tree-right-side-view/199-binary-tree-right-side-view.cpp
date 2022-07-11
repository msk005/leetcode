/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     vector<int>v;
    void func(TreeNode *root, int lvl)
    {
        if(!root)
            return;
        
        if(lvl==v.size())
            v.push_back(root->val);
        func(root->right,lvl+1);
        func(root->left,lvl+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int lvl=0;
       
        func(root, lvl);
        
            return v;
    }
};