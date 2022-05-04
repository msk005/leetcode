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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(!root)
            return result;
        
        queue<TreeNode *>q;
        q.push(root);
        bool LtR=1;
        
        while(!q.empty())
        {
            int size=q.size();
            vector<int>row(size);
            for(int i=0;i<size;i++)
            {
                TreeNode *p=q.front();
                q.pop();
                int idx;
                if(LtR)
                {
                    idx=i;
                }
                else
                    idx=size-i-1;
                
                row[idx]=p->val;
                
                if(p->left)
                    q.push(p->left);
                
                if(p->right)
                    q.push(p->right);
            }
            
            LtR=!LtR;
            result.push_back(row);
        }
        return result;
    }
};