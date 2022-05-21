class Solution {
public:
    int convertTime(string current, string correct) {
    
       int cur=stoi(current.substr(0,2))*60 + stoi(current.substr(3));
       int cor=stoi(correct.substr(0,2))*60 + stoi(correct.substr(3));
        int ans=0;
        int diff=cor-cur;
        int oper[4]={60,15,5,1};   //we are taking high to low so that we can subtract max and we get minimum operations
    
        for(auto x:oper)
        {
            ans+=diff/x;
            diff%=x;
        }
        
        return ans;
    }
};