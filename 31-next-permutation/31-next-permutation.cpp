class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return;
        // int i;
        int idx1;
        for (int i=n-2;i>=0;i--)
        { if(nums[i+1]>nums[i])   //find the number whuch is just greater
            {
             idx1=i;  
                break;
            }
        }
        if(idx1<0)   //if there is no such number reverse the given permutation
        {
            reverse(nums.begin(),nums.end());
        }
         else
         {              //otherwise find the number which is greater than the number found
            int idx2=0;
             for(int i=n-1;i>=0;i--)
              {
              if(nums[i]>nums[idx1])
              {   idx2=i;
               break;
              }
        }
       
        
            swap(nums[idx1],nums[idx2]);        //swap number found and its greater element
            sort(nums.begin()+idx1+1,nums.end());     //sort
        
         }
            
    }
};