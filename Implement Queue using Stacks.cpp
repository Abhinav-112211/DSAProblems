class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>input,output;
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()==false)
            {int val = output.top();
            output.pop();
            return val;
            }
        else{
            while(input.empty()==false)
                {output.push(input.top());
                input.pop();}
            int val = output.top();
            output.pop();
            return val;
            }
            
    }
    
    int peek() {
        if(output.empty()==false)
            return output.top();
        else{
            while(input.empty()==false)
                {output.push(input.top());
                input.pop();}
            return output.top();}
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};
