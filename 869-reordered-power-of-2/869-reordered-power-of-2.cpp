class Solution {
public:
    vector<int> nOfDigits(int n)
    {
        vector<int>arr(10,0);
       while(n)
       {
           int r=n%10;
           arr[r]++;
           n/=10;
       }
        return arr;
    }
    bool reorderedPowerOf2(int n) {
       
        vector<int>count= nOfDigits(n);
        
        for(int i=0;i<31;i++)
        {
            vector<int> powerOfTwo=nOfDigits(pow(2,i));
            if(count==powerOfTwo)
            {
                return true;
            }
        }
        
        return false;
        
        
        
        
        
        
       
    }
};