// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        // Your code here
        vector<int>t(N+1);
        t[0]=1;
        t[1]=1;
        long long ans=1e9+7;
        for(int i=2;i<N+1;i++)
        {
            for(int j=1;j<i+1;j++)
            t[i]=((t[i]%ans)+(t[j-1]%ans)*(t[i-j]%ans))%ans;
        }
        return t[N];
    }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends