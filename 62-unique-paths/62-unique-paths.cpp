class Solution {
public:
   
    
    int t[101][101]={};
    
    
    int uniquePaths(int m, int n, int i=0,int j=0) {
        
        if(i>=n||j>=m)
            return t[i][j]=0;
        if(i==(n-1)&&j==(m-1))
           return t[i][j]=1;
          
            if(t[i][j])
                  return t[i][j];
               else
                   return t[i][j]=uniquePaths(m,n,i+1,j)+uniquePaths(m,n,i,j+1)  ;
          
    }
};