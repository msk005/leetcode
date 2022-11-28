//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int mx=INT_MIN;
	    int sum=0;
	    vector<int>ans,v;
	    for(int i=0;i<n;i++)
	    {
	       // vector<int>v;
	       // if(a[i]<0)
	       //  {
	       //      c=0;
	       //      mx=max(c,mx);
	       //      if(c==mx)
	       //       {
	       //           ans=v;
	                  
	       //       }
	       //       v.clear();
	              
	       //  }
	         
	       //  else
	       //  {
	       //  c++;
	       //  v.push_back(a[i]);
	       //  }
	         if(a[i] < 0) 
	         continue;
	         
         while(i < n && a[i] >= 0)
         {
             sum += a[i];
             v.push_back(a[i]);
             i++;

         }

         if(sum > mx){
            mx = sum;
            ans = v;

         }

         sum = 0;
         v.clear();
	         
	    }
	    if(ans.size()>0)
	    return ans;
	    else return {-1};
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends