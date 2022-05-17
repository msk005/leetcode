class Solution {
public:
          vector<vector<int>> ans;
         
    void solve(vector<int>arr, int idx, vector<int>vec)
    {
        if(idx>=arr.size())
        {
            ans.push_back(vec);
            return;
        }
        
        solve(arr,idx+1,vec);
        
        vec.push_back(arr[idx]);
        solve(arr,idx+1,vec);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
 vector<int>vec;
      solve(nums,0,vec);
        return ans;   
    }
};