class MyQueue {
private:
stack<int>s;
public:
    MyQueue() {
    }
    
    void push(int x) {
        if(s.empty()){
            s.push(x);
            return;
        }
        int temp = s.top();
        s.pop();
        this->push(x);
        s.push(temp);
    }
    
    int pop() {
        if(s.empty()){
            return -1;
        }
        int temp = s.top();
        s.pop();
        return temp;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna