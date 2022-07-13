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
          
//          vector<int> temp(1,0);  //To push first vaue in a certain level in ans as it will only take a vector
        
//         if(ans.empty() || ans.size()<=level)
//         {
//             temp[0]=root->val;
//             ans.push_back(temp);
//             temp.clear();
//         }
//         else
//         {
//             ans[level].push_back(root->val);
//         }
        
//         if(root->left!=NULL)    // Traversing Left Child
//            help(root->left,level+1);
        
//         if(root->right!=NULL)   // Traversing Right Child
//             help(root->right,level+1);
     }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
         if(!root)
             return ans;
         int level=0;
        
        help(root,level);
        return ans;
        
//         if (root == NULL)
//         return ans;
 
//     // Create an empty queue for level order traversal
//     queue<TreeNode*> q;
 
//     // Enqueue Root 
//     q.push(root);
//        q.push(NULL);
 
//     while (!q.empty()) {
//         // front of queue and remove it from queue
//         TreeNode* node = q.front();
//         if(node==NULL)
//         {
//             ans.push_back(temp);
//             temp.clear();
//             q.pop();
//             if(!q.empty())
//              q.push(NULL);
//         }
//         else
//         {
//             int p=node->val;
//             temp.push_back({p});
//             q.pop();
 
//              /* Enqueue left child */
//          if (node->left != NULL)
//              q.push(node->left);
 
//               /*Enqueue right child */
//           if (node->right != NULL)
//              q.push(node->right);
//         }
//     }
//         return ans; 
    }
};