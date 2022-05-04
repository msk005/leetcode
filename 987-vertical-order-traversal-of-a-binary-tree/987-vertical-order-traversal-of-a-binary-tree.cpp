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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        
        vector<vector<int>>res;
       
        if(root==NULL)
            return res;
        
        q.push({root,{0,0}});
        
        while(!q.empty())
        {
            auto tmp=q.front();
            q.pop();
            auto frontNode=tmp.first;
            
            int hd=tmp.second.first;
            int lvl=tmp.second.second;
            
            nodes[hd][lvl].insert(frontNode->val);
            
            if(frontNode->left)
            {
                q.push({frontNode->left,{hd-1,lvl+1}});
            }
            if(frontNode->right)
            {
                q.push({frontNode->right,{hd+1,lvl+1}});
            }
        }
        
        for(auto i:nodes )
        { 
            vector<int>p;
            for(auto j:i.second)
            {
              
                                    p.insert(p.end(),j.second.begin(),j.second.end());
            }
            res.push_back(p);
        }
        return res;
    }
};