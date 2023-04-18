class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        string str="";
        for(int i=0;i<n || i<m ; i++)
        {
            if(i<m)
            str+=word1[i];
            if(i<n)
            str+=word2[i];
           
        }
        
        return str;
    }
};