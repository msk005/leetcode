class Solution {
public:
    string pushDominoes(string dominoes) {
        int r=-1;
        for(int i=0;i<dominoes.length();i++)
        {
            if(dominoes[i]=='L')   //agar L aaya hai
            {
                if(r==-1)   //agar R nhi aaya abhi tk
                {
                    for(int j=i-1; j>=0 and dominoes[j]=='.' ; j--)
                    {
                        dominoes[j]='L';    //l se phhle sb L krdo
                    }
                }
                else   //agr ek baar R aa gya hai
                {
                    for(int j=i-1,k=r+1;k<j;k++,j--)   //to l se phle aur r k baad krdo 
                    {
                        dominoes[j]='L';
                        dominoes[k]='R';
                    }
                    r=-1;   //fir R ko -ve krdo
                }
                    
            }
            
               else if (dominoes[i] == 'R') //agr R aaya hai
                 {   //agar R k baad dubara R aa gya  //mtlb R...R 
                    if (r != -1) 
                     {
               
                        for (int j = r + 1; j < i; j++)
                    
                         dominoes[j] = 'R';
                      }
                     r = i;  //agr phli baar R aaya hai to r ko initialize kro
                  }
            }
        
        
       if (r != -1)   //aagr r -1 nhi mtlb i p R aa gya pr uske bad L nhi aaya
         {
            for (int j = r + 1; j < dominoes.length(); j++)    //L.R..R.LL...R...L...R....
            dominoes[j] = 'R';
         }
        
    return dominoes;
                
    }
};