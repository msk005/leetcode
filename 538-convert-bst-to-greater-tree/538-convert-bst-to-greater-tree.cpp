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
    int ans=0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
            return 0 ;
       else 
       {convertBST(root->right);
           ans=ans+root->val;
           root->val=ans;
       
        convertBST(root->left);
       }
        return root;
    }
    
};