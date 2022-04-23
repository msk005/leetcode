class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         
        int c=0;
        int idx=-1;
        int idx2=-1;
        vector<int>v={-1,-1};
        
        for(int i=0;i<nums.size();i++)
        {
           if(target==nums[i])
           { if(idx==-1)
               { idx=i;
                 c++;
               }
            else
            {
                idx2=i;
                c++;
            }
           }
               
        }
        
        if(c==0)
            return v;
        
        if(c==1)
        {   v[0]=idx;
            v[1]=idx;
            return v;
        }
       else
       { v[0]=idx;
           v[1]=idx2;
        return v;
       }
    
        
    }
};