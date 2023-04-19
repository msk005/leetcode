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
   void zfs(TreeNode* root, int l , int r, int& ans){
        if(!root)
            return;
       
         ans = max(ans, l);
         ans = max(ans, r);
        zfs(root->left, 0, l+1, ans);
        zfs(root->right, r+1, 0, ans);
        
        return;
    }
    int longestZigZag(TreeNode* root) {
        int l=0;
        int r=0;
        int ans=0;
        zfs(root, l,r,ans);
        return ans;
    }
};