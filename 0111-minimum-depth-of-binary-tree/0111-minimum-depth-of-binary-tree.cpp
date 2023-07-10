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
    int minDepth(TreeNode* root) {
        int x,y;
        x=0,y=0;
        if(!root)
            return 0;
        x=minDepth(root->left);
        y=minDepth(root->right);
        
        if(x==0 || y==0)
            return x+y+1;
        return min(x,y)+1;
    }
};