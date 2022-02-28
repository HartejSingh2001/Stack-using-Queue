class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
     
    }
    
    void push(int x) {
        /*q2.push(x); // This is using double queue
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }*/
        q1.push(x);// This part is using single queue
        for(int i=0;i<q1.size()-1;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() {
       int t=q1.front();
        q1.pop();
        return t;
    }
    
    int top() {
       return q1.front(); 
    }
    
    bool empty() {
        if(!q1.empty())
        {
            return false;
        }
        return true;
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
