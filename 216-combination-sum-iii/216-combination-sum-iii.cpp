class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
         solve(1, k, n, v);
        return res;
    }
    
     void solve(int start, int k, int n, vector<int>& v){
        if(n == 0 && v.size() == k){
            res.push_back(v);
        }
        for(int i = start; i <= 9; i++){
            v.push_back(i);
            solve(i + 1, k, n - i, v);
            v.pop_back();
        }
    }
};