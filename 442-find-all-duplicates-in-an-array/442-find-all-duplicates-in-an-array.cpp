class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
//         vector<int>v;
//         unordered_map<int,int>um;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(um.find(nums[i])!=um.end())
//             {
//                v.push_back(nums[i]); 
//             }
//             else
//                 um[nums[i]]++;
//         }
        
//         return v;
        
        
//         without space
        
    // we will make elements negative and check if its alrready neagtive meanis it is duplicate otherwise make it negaitve
        
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int index=abs(nums[i])-1;
            if(nums[index]<0)   //mtlb phle he ye element aa chuka hai
            {
                v.push_back(abs(nums[i]));
            }
            
            else
                nums[index]=-nums[index];
        }
        return v;
        
    }
};