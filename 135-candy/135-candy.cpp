class Solution {
public:
    int candy(vector<int>& ratings) {

        
    int n=ratings.size();
        
    vector<int>lefttR(n,1);
        
        // vector<int>righttL(n,1);
        
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
                lefttR[i]= lefttR[i-1]+1;           //agar peeche ka element less hai to usko jo candies di
                                                      // hain usse 1 jayda dedo
        }
        
        // for(int i=n-2;i>=0;i--)
        // {
        //     if(ratings[i]>ratings[i+1])    //agar peeche ka element less hai to usse ek candy jayada dedo
        //       righttL[i]=righttL[i+1]+1;
        // }
        
        
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
                lefttR[i]= max(lefttR[i],lefttR[i+1]+1);           
        }
        
     // for(int i=0;i<n;i++)
     // {
     //     ans+=max(righttL[i],lefttR[i]);
     // }
        
//        for(auto x:righttL)
//            cout<<x<<endl;
        
//         cout<<endl<<endl;
        
//         for(auto x:lefttR)
//             cout<<x<<endl;
        
        for(auto x:lefttR)
            ans+=x;
        return ans;
        
        
    }
};