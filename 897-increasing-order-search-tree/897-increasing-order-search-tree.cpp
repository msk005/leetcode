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
    
    void inorder(TreeNode* r, stack<TreeNode*> &stack)
    {
        if(r)
        {
            inorder(r->right,stack);
            stack.push(r);
            inorder(r->left,stack);
        }
    }
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode*> stack;
        inorder(root,stack);
        TreeNode* temp=stack.top();
        while(!stack.empty())
        {
            TreeNode *temp=stack.top();
            stack.pop();
            temp->left=NULL;
            if(!stack.empty())
            {
                temp->right=stack.top();
            }
            else
                temp->right=NULL;
        }
        return temp;
        
    }
};