class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        vector<int>vec;
            
            for(int i=0;i<spells.size();i++)
            {
                int l=0;
                 int h=potions.size()-1;
                
                
                while(l<=h)
                {
                    int mid=l+(h-l)/2;
                    long long spell=spells[i],potion=potions[mid];
                    
                    if(spell*potion>=success)
                    {
                        h=mid-1;
                    }
                    else
                        l=mid+1;
                }
                vec.push_back(potions.size()-h-1);

          }
        return vec;
    }
};