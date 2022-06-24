class Solution {
public:
    string reverseWords(string s) {
      
       stringstream str(s);
       
        string word;
        string ans="";
        
        while(str>>word)
        ans = word + (ans.size() ? " " : "") + ans;   //default delimiter is space// 
       
        return ans;
    }
};

//works like this
/*
ans=""
ans=the
ans= sky + " " +the
ans= is + " "+ sky+ " "+ thein this way it will continue*/