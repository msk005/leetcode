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
    int camera=0;
    int needCamera=-1, haveCamera=0, covered=1;
    int minCameraCover(TreeNode* root) {
        if(!root)
            return 0;
        int ans= cameraneed(root);
            
            if(ans==-1)
                camera++;
        
        return camera;
    }
    
    int cameraneed(TreeNode *root){
        if(!root)
            return covered;
    
    int leftc=cameraneed(root->left);
    int rightc=cameraneed(root->right);
    
    if(leftc==needCamera or rightc==needCamera)
    {
        camera++;
        return haveCamera;
    }
    
    if(leftc==haveCamera or rightc==haveCamera)
    {
        return covered;
    }
    
    if(leftc==covered or rightc==covered)
    {
        return needCamera;
    }
    
    return -1;
    } 
};