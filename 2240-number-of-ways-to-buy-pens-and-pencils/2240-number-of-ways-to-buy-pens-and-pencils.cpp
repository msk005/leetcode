class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        if(total<cost1&&total<cost2)
            return 1;
        
       long long int ans;
           long long int npens=total/cost1;
        ans=npens;
           int i=0;
           while(i<=npens)
            {
              ans+=((total-i*cost1)/cost2);
              i++;
            }
       
           return  ans+1;
    }
};