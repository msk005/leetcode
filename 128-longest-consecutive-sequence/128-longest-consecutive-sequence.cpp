class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0)
         return 0;
        int c=1;
        int mx=INT_MIN;
    set<int>s;
        for(auto x:nums)
            s.insert(x);
        
        for(auto x: s)
        {
           if(s.find(x-1)==s.end())
           {
               int currN=x;
               c=1;
            
              while(s.find(currN+1)!=s.end())
              {
                    currN+=1;
                     c+=1;
               }
            mx=max(mx,c);
           }
        }
       return mx;         
    }
};