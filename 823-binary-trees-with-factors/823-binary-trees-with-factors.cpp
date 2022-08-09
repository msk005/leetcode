class Solution {
public:
    #define MOD 1000000007
    int numFactoredBinaryTrees(vector<int>& arr) {
       long long int ans=0;
  unordered_map<long long int,long long int>um;
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size(); i++)
        {
           long long int res=1;
            for(int j=0;j<i;j++)
            {
                
                if(arr[i]%arr[j]==0)
                {
                  int req= arr[i]/arr[j];
                    res=(res+um[req]*um[arr[j]]%MOD)%MOD;
                    
                }
            }
                um[arr[i]]=res;
                ans=ans+res;
                
        }
        
        return ans%MOD;
    }
};



