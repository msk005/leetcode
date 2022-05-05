class MyStack {
public:
    queue<int>q;
    int p;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        
        int size=q.size();
        while(size>1)
        {
            q.push(q.front());
            q.pop();
            size--;
        }
    }
    
    int pop() {
        
         p=q.front();
         q.pop();
          return p;
        
    }
    
    int top() {
        return q.front();
      
    }
    
    bool empty() {
        if(q.empty())
            return true;
        else return false;
            
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */