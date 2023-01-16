class MyQueue {
    stack<int> Stack;
public:
    MyQueue() {
    }
    
    void push(int x) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
      
        stack<int> temp;
        while(!Stack.empty())
        {
            temp.push(Stack.top());
            Stack.pop();
        }
      
        Stack.push(x);
        while(!temp.empty())
        {
            Stack.push(temp.top());
            temp.pop();
        }

    }
    
    int pop() 
    {
        int store = Stack.top();
        Stack.pop();
        return store;
    }
    
    int peek() 
    {
        return Stack.top();
    }
    
    bool empty() {
        return Stack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
