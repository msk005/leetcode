class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int A= (ax2-ax1)*(ay2-ay1);
        int B= (bx2-bx1)*(by2-by1);
        
        int l=max(ax1,bx1);
        int r=min(ax2,bx2);
        
        int t=max(ay1,by1);
        int b=min(ay2,by2);
        
        int overlap=max((r-l),0) * max((b-t),0);
        return A+B-overlap;
    }
};