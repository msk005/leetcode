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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode *p=root;
        vector<int> t;
        inorder(p,t);
        return t;
    }
        void inorder(TreeNode *p,vector<int>&t)
        {
        if(p)
        {
            inorder(p->left,t);
            t.push_back(p->val);
            inorder(p->right,t);
        }
       
    }
};