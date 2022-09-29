class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int n=arr.size();
        // sort(arr.begin(),arr.end());
        vector<pair<int, int>> v;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
           
            
              v.push_back({abs(arr[i]-x),arr[i]});
                
            
        }
         sort(v.begin(), v.end());
       for(auto x:v)
       {  k--;
        if(k>=0)
          ans.push_back(x.second);
       }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};