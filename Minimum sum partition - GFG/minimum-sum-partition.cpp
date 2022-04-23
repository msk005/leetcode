// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  int subsetMin(int a[], int range, int n)
    {
         
        
        bool t[n+1][range+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<range+1;j++)
            {
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<range+1;j++)
            {
                if(a[i-1]<=j)
                    t[i][j]=t[i-1][j]  or t[i-1][j-a[i-1]];
                else
                    t[i][j]=t[i-1][j];
                    
            }
        }
        int diff;
        for (int j = range / 2; j >= 0; j--) {
        // Find the
        if (t[n][j] == true) {
            diff = range - 2 * j;
            break;
        }
    }
    return diff; 
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	     int range=0;
        for(int i=0;i<n;i++)
        {
            range+=arr[i];
        }
        
        return subsetMin(arr,range,n);
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends