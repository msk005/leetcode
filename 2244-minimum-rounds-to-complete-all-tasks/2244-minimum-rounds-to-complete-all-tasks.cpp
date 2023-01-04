class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        for(auto x:tasks)
            mp[x]++;
        int c=0;
        for(auto x:mp)
        {
            if(x.second==1)
                    return -1;
            
            
            if(x.second%3==0)
            {
                
                c+=x.second/3;
            }
            else 
            {
               c+=x.second/3+1; 
            }
               
        }
        // for(auto x:mp)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        return c;
    }
};