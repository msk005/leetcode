class MinStack {
public:
    stack<int>stk;
    multiset<int>m;
    MinStack() {
       
    }
    
    void push(int val) {
        stk.push(val);
        m.insert(val);
    }
    
    void pop() {
        int s=stk.top();
        stk.pop();
        
        m.erase(m.find(s));
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
       return *m.begin();
       
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */