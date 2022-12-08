//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
//ans will be count of prime numbers whose sqyae is less or equal to query
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        bool isPrime[1000001];
        memset(isPrime, true, sizeof(isPrime));
        for(int i = 2; i * i <= 1000000; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j <= 1000000; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        vector<int> S;
        
        for(int i = 2; i <= 1000000; i++) {
            if(isPrime[i]) S.push_back(i);
        }
        
        vector<int> ans;
        for(long long Q : query) {
            int root = sqrt(Q);
            int sz = upper_bound(S.begin(), S.end(), root) - S.begin();
            ans.push_back(sz);
        }
        
        return ans;  
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends