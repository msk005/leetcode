class Solution {
public:
  
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        
        unordered_map<int,int>um;
        
        for(int i=0;i<n;i++)
        {
            um[arr[i]]++;
        }
        if(um.size()==1)
            return 1;
        
        vector<int>v;
        for(auto x:um)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int c=0;
        int p=0;
        
        for(auto x:v)
        {
            
                
                if(p>=n/2)
                   break;
                else
                {
                    p+=x;  
                    c++;
                 
                }
        }
        
        return c;
        
    }
};