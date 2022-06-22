class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        int c=0;
        for(auto x:nums)
            pq.push(x);
      int p;
        while(!pq.empty())
        {
            p=pq.top();
            pq.pop();
           
            c++;
            if(c==k)
                return p;
            
        }
        return p;
    }
};