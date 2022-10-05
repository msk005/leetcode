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
    void helper( TreeNode* root, int val, int d, int lvl )
    {
        
        if(root==NULL)
            return;
        if(lvl==d-1)
        { TreeNode* left=root->left;
           TreeNode* right=root->right;
           root->left= new TreeNode(val);
           root->right=new TreeNode(val);
           
         root->left->left=left;
         root->right->right=right;
        }
        else
        {
        helper(root->left,val,d,lvl+1);
        helper(root->right,val,d,lvl+1);
        }
         
         
           
        }
        
        
    
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
           TreeNode *p= new TreeNode(val);
            p->left=root;
            return p;
        }
        helper(root,val,depth,1);
        return root;
    }
};