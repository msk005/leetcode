// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,h=n,mid;
        while(l<h)
        {
            mid=l+(h-l)/2;
            if(!isBadVersion(mid))
                l=mid+1;
            else
                h=mid;  //yha pr agar aage wala bad verison hai to iska mtlb ho skta hai ki phle bhi bad verison aaya ho
        }
        
        return l;
    }
};