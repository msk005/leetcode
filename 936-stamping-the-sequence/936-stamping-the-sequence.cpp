class Solution {
public:
      int solve(string &target,string &stamp){
        
        for(int i=0;i<target.size();i++){
            int idx1=i;   //s index
            int idx2=0;   //stamp index
            bool f=false; //to check whether we found matching character other than '*'
            
            while(idx1<target.size() && idx2<stamp.size() && (target[idx1]=='*' || target[idx1]==stamp[idx2])){
                if(target[idx1]==stamp[idx2]) f=true;
                idx1++;
                idx2++;      
            }
            
            if(f && idx2==stamp.size()){
                for(int j=0;j<stamp.size();j++){
                    target[i+j]='*';
                }
                return i;
            }
                
        }
        
        return -1;     //pattern not found
        
    }
    vector<int> movesToStamp(string stamp, string target) {
        
        vector<int>ans;
        int n=target.size();
        string aim(n,'*');
        // string s=target;

        while(target!=aim){
            
            int idx=solve(target,stamp);
            
            if(idx==-1)
                return {};
            
            ans.push_back(idx);      
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};