class Solution {
public:
    int mirrorReflection(int p, int q) {
        while(p%2==0 and q%2==0)
        {  p=p/2;
            q=q/2;
        }
        
        
        if(p%2==0 and q%2!=0)
            return 2;
            
            
        else if(p%2!=0 and q%2!=0)
            return  1;
            
            
            else if(p%2!=0 and q%2==0)
                return 0;
        
        return -1;
    }
};


/* https://leetcode.com/problems/mirror-reflection/discuss/939286/Mirror-Mirror-Flip-Flip-with-Pictures-%2B-10-lines-of-code-EVERYONE-CAN-UNDERSTAND!-YOU-TOO!  

isme kya ho rha hai ki mirror image ban rhi hai aur hm dekh le rhe hai ki kinte receptors ko ye rsy touch kr rhi hai   */