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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> t;
        preorder(root, t);
            return t;
    }
    
    void preorder(TreeNode* root,vector<int> &t)
    {
        if(root){
        t.push_back(root->val);
        preorder(root->left,t);
        preorder(root->right,t);
        }
    }
};