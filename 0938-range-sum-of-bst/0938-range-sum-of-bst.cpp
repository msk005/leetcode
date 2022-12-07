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
    void helper(TreeNode *root, int l,int h,int &ans)
    {
        if(root==NULL)
            return ;
        
        if(root->val>=l and root->val<=h)
            ans+=root->val;
        helper(root->left,l,h,ans);
        helper(root->right,l,h,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        helper(root,low,high,ans);
        return ans;
    }
};