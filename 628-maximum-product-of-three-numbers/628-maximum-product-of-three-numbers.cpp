class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int t=1;
        for(int i=0;i<3;i++)
        {
            t*=nums[i];
            
        }
        
       int p=nums[0]*nums[n-1]*nums[n-2];
        if(t>p)
            return t;
        else return p;  //because agr neagtive hai aur sort krenge to sbse bda last m he honge aur positive ka sbse bda shuruwat m;
        
        
    }
};