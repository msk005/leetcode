class Solution {
public:
  int mod = (int)(1e9 + 7);
    
    int f(int n, int k, vector<vector<int>>& t){
       
        if(k<=0) return k==0;
        if(n<=0) return 0;
        
       
        if(t[n][k]!=-1) 
            return t[n][k];
        
        
        t[n][k] = (f(n-1, k, t) + f(n, k-1, t))%mod;
        
        return t[n][k] = (t[n][k] - f(n-1, k-n, t) + mod)%mod;
    }
    int kInversePairs(int n, int k) {
        
        vector<vector<int>> t(n+1,vector<int>(k+1,-1));
        return f(n,k,t);
    }
};