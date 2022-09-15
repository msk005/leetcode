class Solution {
public:
    vector<int>ans={};
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2==1)
            return ans;
         map<int,int>um;
        for(int i=0;i<n;i++)
            um[changed[i]]++;
        sort(changed.begin(),changed.end());
        for(auto x:changed)
        {
               
          
               if(um[x]==0)
                   continue;
               if(um[2*x]==0)
                   return {};
                ans.push_back(x);
               um[x]--;um[2*x]--;
               
            
        }
        
        return ans;
    }
};