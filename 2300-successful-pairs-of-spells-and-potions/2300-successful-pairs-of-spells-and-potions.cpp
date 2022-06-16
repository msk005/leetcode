class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        vector<int>vec;
            
            for(int i=0;i<spells.size();i++)
            {
                int l=0;
                 int h=potions.size();
                
                
                while(h>l)
                {
                    int mid=l+(h-l)/2;
                    long long spell=spells[i];
                    long long potion=potions[mid];
                    long long need=spell*potion;
                    if(need>=success)
                    {
                        h=mid;
                    }
                    else
                        l=mid+1;
                }
                vec.push_back(potions.size()-h);

          }
        return vec;
    }
};