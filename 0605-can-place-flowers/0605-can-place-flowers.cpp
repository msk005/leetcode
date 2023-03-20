class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        
        int s=flowerbed.size(),ans=0;
        
        for(int i=1;i<s-1;i++)
        {
            
            if(flowerbed[i-1]==0 and flowerbed[i+1]==0 and flowerbed[i]==0)
                
            {
                ans++;
                flowerbed[i]=1;
            }
               
        }
        
        if(n<=ans)
            return true;
        return false;
    }
};