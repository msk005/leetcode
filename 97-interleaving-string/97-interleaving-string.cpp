class Solution {
public:
    int t[201][201];
    bool helper(string s1,string s2,string s3,int i,int j)
    {
           int k=i+j;
         if(s1.length()==i and j==s2.length() and k==s3.length())
             return true; 
        
     if(t[i][j]!=-1)
         return t[i][j];
        if(i<s1.length() and s1[i]==s3[k])
        {
           bool f1= helper(s1,s2,s3,i+1,j);
            t[i][j]=f1;
            if(f1)
            return true;
        }
        if(j<s2.length() and s2[j]==s3[k])
        {
              bool f2= helper(s1,s2,s3,i,j+1);
            t[i][j]=f2;
              if(f2)
               return true;
        } 
        return t[i][j]=false;
    }
            
        
    
    
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length())
            return false;
        memset(t,-1,sizeof(t));
        int i=0,j=0;
       return helper(s1,s2,s3,i,j);
    
    }
};