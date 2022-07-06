class Solution {
public:
    int maxScore(vector<int>& c, int k) {
       int maxSum=0;
        for(int i=0;i<k;i++)
        {
            maxSum+=c[i];
        }
        int newSum=maxSum;
        for(int i=k-1,j=c.size()-1;i>=0;i--,j--)
        {
            newSum+=c[j];
            newSum-=c[i];
            
            if(newSum>maxSum)
                maxSum=newSum;
        }
        
        return maxSum;
    }
};

//last se subtract kro beacuse aage wala he le skte hai phle