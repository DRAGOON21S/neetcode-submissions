class MinStack {
public:
        stack<int> ans;
        stack<int> min;
    MinStack() {
        
    }
    
    void push(int val) {
        ans.push(val);
        if(min.empty() || min.top()>=val)
            min.push(val);
    }
    
    void pop() {
        if(ans.top()==min.top())
            min.pop();
        ans.pop();
    }
    
    int top() {
        return ans.top();
    }
    
    int getMin() {
        return min.top();
    }
};
