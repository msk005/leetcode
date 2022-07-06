class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
        if(n<=1)
            return 0;
        int ones=0,zeros=0;
        for(auto x:s)
        {
            if(x=='1')
                ones++;
            else
                zeros++;
        }
        if(abs(ones-zeros)%2!=0 and abs(ones-zeros)!=1 or abs(ones-zeros)%2==0 and abs(ones-zeros)!=0)
            return -1;
        
        else{
        string newS1;
        string newS2;
        
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                newS1+='1';
                newS2+='0';
            }
            else
            {
                 newS1+='0';
                 newS2+='1';
            }
        }
        
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
         if(newS1[i]!=s[i])
             c1++;
            if(newS2[i]!=s[i])
             c2++;
        }
        
        
        // cout<<newS1<<" "<<newS2;
        if(c1%2==0 and c2%2==0)
            return min(c1/2,c2/2);
        
        else if(c1%2==0 or c2%2==0)
        {
            if(c1%2==0)
                return c1/2;
            else
                return c2/2;
            
        }
        
        else 
            return -1;
        }    
     return 0;       
    }
};