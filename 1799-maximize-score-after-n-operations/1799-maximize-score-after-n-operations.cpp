class Solution {
public:
    unordered_map<string,int>A;
  int recur(vector<int> &nums,string &Visited,int ops){
        
        if(ops>nums.size())
            return 0;
        
        
        if(A.find(Visited)!=A.end())
            return A[Visited];
        
        
        int n=nums.size();
        int ans=0;
		
        // choosing 2 elements every time
        for(int i=0;i<n;++i)
        {
            if(!Visited[i])
            {
                Visited[i]=1;
                for(int j=i+1;j<n;++j)
                {
                    if(!Visited[j])
                    {
                        Visited[j]=1;
                        ans=max(ops*__gcd(nums[i],nums[j])+recur(nums,Visited,ops+1),ans);
                        Visited[j]=0;
                    }
                    
                }
                Visited[i]=0;
            } 
        }

        return A[Visited]=ans;
    }
    
    
    
    int maxScore(vector<int>& nums) {
        int n=nums.size();
		//maintaining a string of Visited to avoid TLE
        string Visited(n,0);
        return recur(nums,Visited,1);
        
    }
};