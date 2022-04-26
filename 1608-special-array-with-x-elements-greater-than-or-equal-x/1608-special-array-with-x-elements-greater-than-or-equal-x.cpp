class Solution {
public:
   int check(vector<int> &v,int mid){
            int count=0;
            for(int i=0;i<v.size();i++){
             
                if(mid>v[i])
                    return count;
        
                count++;
            }
            return count;
        }

    int specialArray(vector<int>& nums) {
          
   sort(nums.begin(),nums.end(),greater<int>());
        
        
        int l=0;
        int h=nums[0];
        while(l<=h){
            int mid=l+(h-l)/2;
            int count=check(nums,mid);
            
            if(mid==count)  
            return mid;

            else if(mid<count) 
            l=mid+1;

            else 
            h=mid-1;
        }
        
       return -1; 
        
    }
};