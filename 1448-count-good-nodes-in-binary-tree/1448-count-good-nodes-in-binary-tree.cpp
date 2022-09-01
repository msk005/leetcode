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
    int c=0;
    void helper(TreeNode* root , int max)
    {
       
        if(root->val>=max)
        {
            c++;
            max=root->val;
        }
        if(root->left)
            helper(root->left,max);
        
        if(root->right)
            helper(root->right,max);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        helper(root,-1e9);
        return c;
    }
};