// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	     int l=0,h=N-2;
        
        int mid;
        while(l<=h)
        {
            mid=(l+h)>>1;
       if(A[mid]==A[mid^1])  //(mid%2==0 && nums[mid]==nums[mid+1]) or (mid%2 ==1 && nums[mid] == nums[mid-1]) 
                l=mid+1;
            else
                h=mid-1;
        }
        return A[l];//h+1
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends