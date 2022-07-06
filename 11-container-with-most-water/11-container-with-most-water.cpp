class Solution {
public:
    int maxArea(vector<int>& height) {
        int reqArea=0;
        int mxArea=0;
        for(int i=0,j=height.size()-1;i<j;)
        {
            reqArea=(j-i)*min(height[i],height[j]);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
            
            mxArea=max(mxArea,reqArea);
        }
        
        return mxArea;
    }
};