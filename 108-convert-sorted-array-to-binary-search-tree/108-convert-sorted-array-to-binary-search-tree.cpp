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
   TreeNode* sortedArrayTree(vector<int> &nums,int start,int end){
        if(start > end){
          return NULL;
        }
        int mid = start+(end-start)/2;
	    int mid_element = nums[mid];   //mid will be the root bcoz array is sorted
        TreeNode *root = new TreeNode(mid_element);
       
		//connecting the root node with left & right nodes
       
        root->left = sortedArrayTree(nums,start,mid-1);
        root->right =sortedArrayTree(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        if(nums.size()==0)
            return NULL;
        int start = 0;
        int end = nums.size()-1;
        return sortedArrayTree(nums,start,end);
    }
};