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
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
      int lh=height(root->left);
        int rh=height(root->right);
        if(lh>rh)
            return lh+1;
        
        return rh+1;
        
    }
    
    int helper(TreeNode *root, int h)
    {
        if(!root)
            return 0;
       if(h==1)
           return root->val;
        
            int l=helper(root->left,h-1);
            int r=helper(root->right,h-1);
        return l+r;
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        
      int ans= helper(root,h);
        return ans;
        
    }
};