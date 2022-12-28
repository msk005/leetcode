class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
         priority_queue<int> pq;
        for(auto x: piles)
            pq.push(x);
        
        while(k--)
        {
            int t=pq.top();
            pq.pop();
            pq.push(t-floor(t/2));
        }
        
        int ans=0;
        while(pq.size()>0)
        {
            int t;
            t=pq.top();
            // cout<<t<<endl;
            ans+=t;
            pq.pop();
        }
    return ans;
    }
};