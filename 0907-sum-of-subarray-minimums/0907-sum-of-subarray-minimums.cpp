class Solution {
public:
//     int helper(vector<int>&arr,int i,int j,int n)
//     {
//         if(i==n or j==n)
//             return 0;
        
//         int mnm=arr[i];
//         for(int a=i+1;a<=j;a++)
//         {
//             mnm=min(mnm,arr[a]);
//         }
//         return mnm;
//     }
    int sumSubarrayMins(vector<int>& arr) {
//         int sum=0;
//         int n=arr.size();
//         for(int i=0;i<n;i++)
//         {

//         for(int j=0;j<n;j++)
//         {  
//             sum+=helper(arr,i,j,n);
//          }
            
//         }
        
//         return sum;
        
         int n = arr.size();
        
      
        vector<int>rightMins(n);
        
        
        stack<int>leftStak;
        stack<int>rightStak;
       
        for(int i=n-1;i>=0;i--)
        {
            
            while(!rightStak.empty() && arr[rightStak.top()]>=arr[i])
                rightStak.pop();
        
            rightMins[i] = rightStak.empty() ? n : rightStak.top();
            
            // push current index to stack
            rightStak.push(i);
        }

        int count = 0;
        int MOD = 1000000007;
        
        
        int leftMin;
        
        
        long leftSize;
        long rightSize;
        
        // loop through left to right and store the previous min value index 
        for(int i=0;i<n;i++)
        {
          
            while(!leftStak.empty() && arr[leftStak.top()]>arr[i])
                leftStak.pop();
            
            leftMin = leftStak.empty() ? -1 : leftStak.top();
            
          
            
            leftStak.push(i);
            
          
            leftSize = i - leftMin;
            rightSize = rightMins[i] - i;
            
          
            count = (count + (arr[i] * (leftSize * rightSize) % MOD) %MOD )%MOD;
        }
        
        return count;
    }
};