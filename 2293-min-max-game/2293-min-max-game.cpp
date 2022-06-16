class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        // vector<int>vec;
        int m=n/2;
        
        while(m)
        { int k=0;
          for(int i=0;i<n/2;i++)
          {
            if(k%2==0)
                nums[k]=(min(nums[2*i],nums[2*i+1]));
            
            else
                nums[k]=(max(nums[2 * i], nums[2 * i + 1]));
             k++;
          }
         m=m/2;
        }
       
        
        return nums[0];
    }
};