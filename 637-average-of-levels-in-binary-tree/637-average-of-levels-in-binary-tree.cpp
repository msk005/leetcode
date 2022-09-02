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
    
     vector<vector<int>> ans;
     void help(TreeNode * root, int level)
     {
         vector<int>temp(1,0);
        if(ans.empty() || ans.size()<=level)
        { 
            temp[0]=root->val;
            ans.push_back(temp);
            temp.clear();
        }
//          
         else
         {
             ans[level].push_back(root->val);
         }
         
         if(root->left)
         help(root->left,level+1);
         if(root->right)
         help(root->right,level+1);
     }
    vector<double> averageOfLevels(TreeNode* root) {

         int level=0;
        vector<double>res;
        help(root,level);
        
        for(int i=0;i<ans.size();i++)
        {    double sum=0;
       
            for(int j=0;j<ans[i].size();j++)
            {
              sum+=ans[i][j] ; 
            }
           res.push_back(sum/(ans[i].size()));
        }
        return res;
    }
};