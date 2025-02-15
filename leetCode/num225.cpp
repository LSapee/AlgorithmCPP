class MyStack {
public:
    queue<int> Q;
    MyStack() {

    }

    void push(int x) {
        Q.push(x);
    }

    int pop() {
        int cur;
        queue<int> Q2;
        while(!Q.empty()){
            cur = Q.front(); Q.pop();
            if(!Q.empty()) Q2.push(cur);
        }
        Q=Q2;
        return cur;
    }

    int top() {
        int cur;
        queue<int> Q2;
        while(!Q.empty()){
            cur = Q.front(); Q.pop();
            Q2.push(cur);
        }
        Q=Q2;
        return cur;
    }

    bool empty() {
        if(!Q.empty())return false;
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