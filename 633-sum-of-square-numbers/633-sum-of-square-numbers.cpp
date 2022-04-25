class Solution {
public:
    bool judgeSquareSum(int c) {
      long long int i,j;
        
        for(i=0,j=sqrt(c);i<=j;)
        {
            
                if(i*i+j*j>c)
                    j--;
                else if(i*i+j*j<c)
                    i++;
            else return true;
            }
        
        return false;
    }
};