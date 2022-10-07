class MyCalendarThree {
public:
    map<int,int>um;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        um[start]++;
        um[end]--;
        
        int res=0;
        int cur=0;
        for(auto &[time,diff]: um)
        {
            cur+=diff;
            res=max(res,cur);
        }
        return res;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */