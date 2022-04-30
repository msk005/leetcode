class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
       int mnm=INT_MAX;
       int n=nums.size();
       int idx;
        vector<int>v1;
        vector<int>v2;
       long long int s1=0;
        long long int s2=0;
       for(int i=0;i<n;i++)
       {
           s1+=nums[i];
           v1.push_back(s1/(i+1));
       }
        int i=1;
        v2.push_back(0);
        for(int j=nums.size()-1;j>=1;j--)
        {
            s2+=nums[j];
             v2.push_back(s2/i);
            i++;

        }
        
        reverse(v2.begin(),v2.end());
        vector<int>ans;
        for(int k=0;k<n;k++)
        {
            ans.push_back(abs(v1[k]-v2[k]));
            
        }
        
        for(int m=0;m<ans.size();m++)
        { 
            if(ans[m]<mnm)
            {
                mnm=ans[m];
                idx=m;
            }
        }
        
//         for(int x:v2)
//             cout<<x;
        return idx;
    }
};