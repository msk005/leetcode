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
    TreeNode *prev=NULL, *first=NULL, *end=NULL;
    void recoverHelp(TreeNode *root)
    {
        if(!root)
            return;
        recoverHelp(root->left);
        if(prev)
        {
            if(root->val<prev->val){
            {
                if(!first)
                first=prev;
            }
            end=root;
            }
        }
        prev=root;
        recoverHelp(root->right);
    }
    void recoverTree(TreeNode* root) {
        
        recoverHelp(root);
        swap(first->val,end->val);
        
    }
    
};