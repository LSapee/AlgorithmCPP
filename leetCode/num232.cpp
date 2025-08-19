class MyQueue {
public:
    stack<int> stk1;
    stack<int> stk2;
    MyQueue() {

    }

    void push(int x) {
        stk1.push(x);
    }

    int pop() {
        if(!stk2.empty()){
            int k =stk2.top();
            stk2.pop();
            return k;
        }else{
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
            int k =stk2.top();
            stk2.pop();
            return k;
        }
    }

    int peek() {
        if(!stk2.empty())return stk2.top();
        else{
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        return stk2.top();
    }

    bool empty() {
        if(stk1.empty() && stk2.empty())return true;
        return false;
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