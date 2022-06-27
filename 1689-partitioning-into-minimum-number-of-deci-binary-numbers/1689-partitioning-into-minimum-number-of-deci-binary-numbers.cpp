class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
        for(int i=0;i<n.size();i++)
        {
            int t=n[i]-'0';
            mx=max(t,mx);
        }
        
        return (mx);
        
    }
};