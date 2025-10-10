class MinStack {

private:
    vector<int> stack;    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {

        if(stack.empty()){return -1;}

        int min = stack[0];

        for(int i=1;i<stack.size();i++){
            if(stack[i]<min){
                min=stack[i];
            }
        }

        return min;
        
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