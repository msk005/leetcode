// class Solution {
// public:
//     long long minCost(vector<int>& nums, vector<int>& cost) {
//         int n=nums.size();
//         vector<pair<int,int>>v;
        
//        for(int i=0;i<n;i++)
//        {
//            v.push_back({nums[i],cost[i]});
           
//        }
        
//         sort(v.begin(),v.end());
// //         
//        long long int minCost=LLONG_MAX;
//         vector<long long int> prefSum(n);
//         prefSum[0]=v[0].first;

//         for(auto i=1;i<n;i++)
//         {
//             prefSum[i]=prefSum[i-1]+v[i].first;
//         }
        
//         for(auto i=0;i<n;i++)
//         {
//         long long int cost=0;
            
//             cost=prefSum[i]-prefSum[i-1]
            
            
//             minCost=min(minCost,cost);
            
//         }
//         return minCost;
//     }
// };

#define lln long long int
class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        int n=nums.size();
        
        
        lln ans=1e18;
        
         int l=0,h=1e6;
        
            
        while(l<h){
            lln mid=(l+h)/2;
            
            lln gt=isValid(mid,nums,cost);
            
            
            lln gt1=isValid(mid+1,nums,cost);
            
            lln gt2=isValid(mid-1,nums,cost);
            
            
            ans=min({ans,gt,gt1,gt2});

            if(gt1<gt2){
                l=mid+1;
            }
            
            else
                h=mid-1;
            
        }
        
        
        return ans;
            
        }
        
        
    lln isValid(lln mx,vector<int>nums,vector<int>&cost){
            
            
            lln ans=0;
            
            int n=nums.size();
            
        for(int i=0;i<n;i++){
            ans+=1ll*abs(mx-nums[i])*cost[i];
        }
        
        return ans;
            
        }
        
        
    
};
