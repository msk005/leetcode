class Solution {
public:
    vector<vector<int>>ans;
    vector<int>vec;
    void solve(vector<int>&arr, int target, int idx)
    {
        if(target==0)
        {
            ans.push_back(vec);
            return;
        }
        
        for(int i=idx;i<arr.size();i++)
        {
            if(i>idx and arr[i-1]==arr[i])
                continue;
            
            if(target<arr[i])
                break;
            
            
            vec.push_back(arr[i]);
            solve(arr,target-arr[i],i+1);
            vec.pop_back();
            
            // solve(arr,target,i+1);
        }
        
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        
        return ans;
    }
};