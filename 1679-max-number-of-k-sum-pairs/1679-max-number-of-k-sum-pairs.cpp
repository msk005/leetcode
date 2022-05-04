class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
//         unordered_map<int,int>um;
//         int c=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(um.find(k-nums[i])!=um.end()&&um[k-nums[i]]>0)
//             {   
//                 c++;
//                 um[k-nums[i]]--;
//             }
//             else
//                 um[nums[i]]++;
//         }
//         for(auto x:um)
//             cout<<x.first<<" "<<x.second<<endl;
            
         
//         return c;
        
        sort(nums.begin(),nums.end());
        int h=nums.size()-1;
        int l=0;
        int c=0;
        while(l<h)  //equal nhi lga skte bcoz dono pointers same number p point krenge
        {
           
            if(nums[l]+nums[h]==k)
                c++,l++,h--;
            else if(nums[l]+nums[h]>k)
                h--;
            else
                l++;
        }
        return c;
    }
};