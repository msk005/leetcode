// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        long int m=(1000000007);
       long int t[n+1][sum+1];
       for(int i=0;i<=n;i++)
       { 
           for(int j=0;j<=sum;j++)
         { if(i==0)
             t[i][j]=false;
             if(j==0)
              t[i][j]=true;
         }
       }
        
       for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
        {
            if(arr[i-1]<=j)
              t[i][j]=(t[i-1][j]%m + t[i-1][j-arr[i-1]]%m)%m; //since input is large so dicvide it carefull yo get the right answer
              
              else
              t[i][j]=t[i-1][j];
        }
	}
        
        return t[n][sum];
        
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends