class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int l=0,r=height.size()-1;
        
        int leftmx,rightmx;
        leftmx=rightmx=0;
        
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>=leftmx)
                    leftmx=height[l];
                else
                    res+=leftmx-height[l];
                
                l++;
            }
            
            else
            {
                if(height[r]>=rightmx)
                    rightmx=height[r];
                
                else
                    res+=rightmx-height[r];
                
                r--;
            }
        }   
       return res; 
    }
};