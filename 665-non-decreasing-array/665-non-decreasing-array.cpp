class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
       int problemPoint=0;
        for(int i=1;i<nums.size();i++)
        {
        if(nums[i]<nums[i-1])
          { 
            if(problemPoint==1)
                return false;   //means previously there is fixing in array and we cannot fix again
            
            problemPoint++;
            
            if(i<2||nums[i-2]<=nums[i])    
                nums[i-1]=nums[i];
            
            else
                nums[i]=nums[i-1];
            
          }
        }
     
        
            return true;
    }    
    
};