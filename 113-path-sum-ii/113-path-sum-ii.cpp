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
    vector<vector<int>>ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>rtl;
        pre(root,targetSum,rtl);
        return ans;
    }
    
    void pre(TreeNode *root, int target,vector<int>path)
        
    {
        if(!root)
            return ;
       path.push_back(root->val);
        
        target-=root->val;
        
        if(!root->left and !root->right and target==0)
           ans.push_back(path);
        
        pre(root->left,target,path);
         pre(root->right,target,path);
        
        path.pop_back();
        
    }
};